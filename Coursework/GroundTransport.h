#pragma once
#include "Transport.h"

class RACING_API GroundTransport : public Transport {
protected:
    double moveTime;
public:
    GroundTransport(const char* name, double speed, double moveTime);
    bool isGround() const override;
    bool isAir() const override;
    double getMoveTime() const;
};