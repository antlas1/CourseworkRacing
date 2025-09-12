#pragma once
#include "AirTransport.h"

class RACING_API Eagle : public AirTransport {
public:
    Eagle();
    double calculateTime(double distance) const override;
    double getDistanceReduction(double distance) const override;
};