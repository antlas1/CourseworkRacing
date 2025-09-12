#pragma once
#include "Transport.h"

class RACING_API AirTransport : public Transport {
public:
    AirTransport(const char* name, double speed);
    bool isGround() const override;
    bool isAir() const override;
    virtual double getDistanceReduction(double distance) const = 0;
};