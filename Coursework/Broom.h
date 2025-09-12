#pragma once
#include "AirTransport.h"

class RACING_API Broom : public AirTransport {
public:
    Broom();
    double calculateTime(double distance) const override;
    double getDistanceReduction(double distance) const override;
};