#pragma once
#include "GroundTransport.h"

class RACING_API AllTerrainBoots : public GroundTransport {
public:
    AllTerrainBoots();
    double calculateTime(double distance) const override;
};