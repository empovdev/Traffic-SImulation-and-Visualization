#ifndef VEHICLESGENERATOR_H
#define VEHICLESGENERATOR_H

#include "Entities/Vehicle/vehicle.h"
#include "Utilities/road.h"
#include "commonenum.h"
///////////////
/// \brief The VehiclesGenerator class
/// FactoryClass For Vehicle Class
/// //////////
class VehiclesGenerator
{
public:
    static Vehicle *getLeftTurningVehicle(const region& approach,const VEHICLEMETHOD& x);
    static Vehicle *getThroughVehicle(const region& approach,const int& lane,const VEHICLEMETHOD& x);
    static Vehicle *getRightTurningVehicle(const region& approach,const VEHICLEMETHOD& x);
};

#endif // VEHICLESGENERATOR_H