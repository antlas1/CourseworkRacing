#ifndef TRANSPORT_CPP
#define TRANSPORT_CPP

#include "Transport.h"

Transport::Transport(const char* name, double speed)
    : name(name), speed(speed) {
}

Transport::~Transport() {}

const char* Transport::getName() const {
    return name;
}

double Transport::getSpeed() const {
    return speed;
}

#endif