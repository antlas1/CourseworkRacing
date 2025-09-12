#pragma once
#include "GroundTransport.h"

class RACING_API Camel : public GroundTransport {
public:
    Camel();
    double calculateTime(double distance) const override;
};