#pragma once
#include "Transport.h"

class RACING_API TransportFactory {
public:
    static Transport* createTransport(int type);
};