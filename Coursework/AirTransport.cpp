#include "AirTransport.h"

AirTransport::AirTransport(const char* name, double speed)
    : Transport(name, speed) {
}

bool AirTransport::isGround() const {
    return false;
}

bool AirTransport::isAir() const {
    return true;
}