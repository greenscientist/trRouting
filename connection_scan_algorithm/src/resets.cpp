#include "calculator.hpp"

namespace TrRouting
{
  
  void Calculator::reset()
  {
    
    calculationTime = algorithmCalculationTime.getDurationMicrosecondsNoStop();

    std::fill(stopsTentativeTime.begin(), stopsTentativeTime.end(), MAX_INT);
    std::fill(stopsReverseTentativeTime.begin(), stopsReverseTentativeTime.end(), -1);
    //std::fill(stopsD.begin(), stopsD.end(), MAX_INT);
    //std::fill(stopsReverseTentativeTime.begin(), stopsReverseTentativeTime.end(), std::deque<std::pair<int,int>>(1, std::make_pair(MAX_INT, MAX_INT));
    std::fill(stopsAccessTravelTime.begin(),  stopsAccessTravelTime.end(), -1);
    std::fill(stopsEgressTravelTime.begin(),  stopsEgressTravelTime.end(), -1);
    std::fill(tripsEnterConnection.begin(),   tripsEnterConnection.end(), -1);
    std::fill(tripsExitConnection.begin(),    tripsExitConnection.end(), -1);
    std::fill(tripsEnterConnectionTransferTravelTime.begin(), tripsEnterConnectionTransferTravelTime.end(), MAX_INT);
    std::fill(tripsExitConnectionTransferTravelTime.begin(),  tripsExitConnectionTransferTravelTime.end(), MAX_INT);
    //std::fill(tripsReverseTime.begin(), tripsReverseTime.end(), MAX_INT);
    std::fill(tripsEnabled.begin(),    tripsEnabled.end(), 1);
    std::fill(tripsUsable.begin(),     tripsUsable.end(),  0);
    std::fill(forwardJourneys.begin(), forwardJourneys.end(), std::make_tuple(-1,-1,-1,-1,-1,-1));
    std::fill(reverseJourneys.begin(), reverseJourneys.end(), std::make_tuple(-1,-1,-1,-1,-1,-1));

    accessFootpaths.clear();
    egressFootpaths.clear();
    
    departureTimeSeconds = -1;
    arrivalTimeSeconds   = -1;

    if(params.odTrip != NULL)
    {
      departureTimeSeconds = params.odTrip->departureTimeSeconds;
    }
    else if (params.departureTimeHour != -1 && params.departureTimeMinutes != -1)
    {
      departureTimeSeconds = params.departureTimeHour * 3600 + params.departureTimeMinutes * 60;
    }
    if(params.arrivalTimeHour != -1 && params.arrivalTimeMinutes != -1)
    {
      arrivalTimeSeconds = params.arrivalTimeHour * 3600 + params.arrivalTimeMinutes * 60;
    }





    std::cerr << "-- reset and preparations -- " << algorithmCalculationTime.getDurationMicrosecondsNoStop() - calculationTime << " microseconds\n";
    calculationTime = algorithmCalculationTime.getDurationMicrosecondsNoStop();





    // fetch stops footpaths accessible from origin using params or osrm fetcher if not provided:
    minAccessTravelTime = MAX_INT;
    maxEgressTravelTime = -1;
    minEgressTravelTime = MAX_INT;
    maxAccessTravelTime = -1;
    int i {0};



    if (!params.returnAllStopsResult && departureTimeSeconds >= -1)
    {
      if(params.odTrip != NULL)
      {
        accessFootpaths = params.odTrip->accessFootpaths;
      }
      else if (params.accessStopIds.size() > 0 && params.accessStopTravelTimesSeconds.size() == params.accessStopIds.size())
      {
        i = 0;
        for (auto & accessStopId : params.accessStopIds)
        {
          accessFootpaths.push_back(std::make_pair(stopIndexesById[accessStopId], params.accessStopTravelTimesSeconds[i]));
          i++;
        }
      }
      else
      {
        accessFootpaths = OsrmFetcher::getAccessibleStopsFootpathsFromPoint(params.origin, stops, params.accessMode, params.maxAccessWalkingTravelTimeSeconds, params.walkingSpeedMetersPerSecond, params.osrmRoutingWalkingHost, params.osrmRoutingWalkingPort);
      }
  
      for (auto & accessFootpath : accessFootpaths)
      {
        stopsAccessTravelTime[accessFootpath.first] = accessFootpath.second;
        forwardJourneys[accessFootpath.first]       = std::make_tuple(-1, -1, -1, -1, accessFootpath.second, -1);
        stopsTentativeTime[accessFootpath.first]    = departureTimeSeconds + accessFootpath.second + params.minWaitingTimeSeconds;
        if (accessFootpath.second < minAccessTravelTime)
        {
          minAccessTravelTime = accessFootpath.second;
        }
        if (accessFootpath.second > maxAccessTravelTime)
        {
          maxAccessTravelTime = accessFootpath.second;
        }
        //result.json += "origin_stop: " + stops[accessFootpath.first].name + " - " + Toolbox::convertSecondsToFormattedTime(stopsTentativeTime[accessFootpath.first]) + "\n";
        //result.json += std::to_string(stops[accessFootpath.first].id) + ",";
      }
    }




    if (!params.returnAllStopsResult && arrivalTimeSeconds >= -1)
    {
      // fetch stops footpaths accessible to destination using params or osrm fetcher if not provided:
      if(params.odTrip != NULL)
      {
        egressFootpaths = params.odTrip->egressFootpaths;
      }
      else if (params.egressStopIds.size() > 0 && params.egressStopTravelTimesSeconds.size() == params.egressStopIds.size())
      {
        egressFootpaths.reserve(params.egressStopIds.size());
        i = 0;
        for (auto & egressStopId : params.egressStopIds)
        {
          egressFootpaths.push_back(std::make_pair(stopIndexesById[egressStopId], params.egressStopTravelTimesSeconds[i]));
          i++;
        }
      }
      else
      {
        egressFootpaths = OsrmFetcher::getAccessibleStopsFootpathsFromPoint(params.destination, stops, params.accessMode, params.maxEgressWalkingTravelTimeSeconds, params.walkingSpeedMetersPerSecond, params.osrmRoutingWalkingHost, params.osrmRoutingWalkingPort);
      }
      for (auto & egressFootpath : egressFootpaths)
      {
        stopsEgressTravelTime[egressFootpath.first]     = egressFootpath.second;
        reverseJourneys[egressFootpath.first]           = std::make_tuple(-1, -1, -1, -1, egressFootpath.second, -1);
        stopsReverseTentativeTime[egressFootpath.first] = arrivalTimeSeconds - egressFootpath.second;
        if (egressFootpath.second > maxEgressTravelTime)
        {
          maxEgressTravelTime = egressFootpath.second;
        }
        if (egressFootpath.second < minEgressTravelTime)
        {
          minEgressTravelTime = egressFootpath.second;
        }
        stopsEgressTravelTime[egressFootpath.first] = egressFootpath.second;
        //stopsD[egressFootpath.first]                = egressFootpath.second;
        //result.json += "origin_stop: " + stops[accessFootpath.first].name + " - " + Toolbox::convertSecondsToFormattedTime(stopsTentativeTime[accessFootpath.first]) + "\n";
        //result.json += std::to_string((int)(ceil(egressFootpath.second))) + ",";
      }
    }

    //std::cerr << "-- maxEgressTravelTime = " << maxEgressTravelTime << std::endl;





    std::cerr << "-- access and egress footpaths -- " << algorithmCalculationTime.getDurationMicrosecondsNoStop() - calculationTime << " microseconds\n";
    calculationTime = algorithmCalculationTime.getDurationMicrosecondsNoStop();






    // disable trips according to parameters:
    //bool hasOnlyServices     = !params.onlyServiceIds.empty();
    bool hasOnlyRoutes       = !params.onlyRouteIds.empty();
    bool hasOnlyRouteTypes   = !params.onlyRouteTypeIds.empty();
    bool hasOnlyAgencies     = !params.onlyAgencyIds.empty();
    bool hasExceptServices   = !params.exceptServiceIds.empty();
    bool hasExceptRoutes     = !params.exceptRouteIds.empty();
    bool hasExceptRouteTypes = !params.exceptRouteTypeIds.empty();
    bool hasExceptAgencies   = !params.exceptAgencyIds.empty();
    
    i = 0;
    for (auto & trip : trips)
    {
      if (params.onlyServiceIds.size() > 0)
      {
        if (std::find(params.onlyServiceIds.begin(), params.onlyServiceIds.end(), trip.serviceId) == params.onlyServiceIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      if (hasOnlyRoutes)
      {
        if (tripsEnabled[i] == 1 && params.onlyRouteIds.find(trip.routeId) == params.onlyRouteIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      if (hasOnlyRouteTypes)
      {
        if (tripsEnabled[i] == 1 && params.onlyRouteTypeIds.find(trip.routeTypeId) == params.onlyRouteTypeIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      if (hasOnlyAgencies)
      {
        if (tripsEnabled[i] == 1 && params.onlyAgencyIds.find(trip.agencyId) == params.onlyAgencyIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      if (hasExceptServices)
      {
        if (tripsEnabled[i] == 1 && params.exceptServiceIds.find(trip.serviceId) != params.exceptServiceIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      if (hasExceptRoutes)
      {
        if (tripsEnabled[i] == 1 && params.exceptRouteIds.find(trip.routeId) != params.exceptRouteIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      if (hasExceptRouteTypes)
      {
        if (tripsEnabled[i] == 1 && params.exceptRouteTypeIds.find(trip.routeTypeId) != params.exceptRouteTypeIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      if (hasExceptAgencies)
      {
        if (tripsEnabled[i] == 1 && params.exceptAgencyIds.find(trip.agencyId) != params.exceptAgencyIds.end())
        {
          tripsEnabled[i] = -1;
        }
      }
      
      i++;
    }
    




    std::cerr << "-- filter trips -- " << algorithmCalculationTime.getDurationMicrosecondsNoStop() - calculationTime << " microseconds\n";
    calculationTime = algorithmCalculationTime.getDurationMicrosecondsNoStop();





  }



}