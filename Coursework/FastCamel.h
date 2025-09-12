#pragma once
#include "GroundTransport.h"

class RACING_API FastCamel : public GroundTransport {
public:
    FastCamel();
    double calculateTime(double distance) const override;
};