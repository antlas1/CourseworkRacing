#pragma once
#include "GroundTransport.h"

class RACING_API Centaur : public GroundTransport {
public:
    Centaur();
    double calculateTime(double distance) const override;
};