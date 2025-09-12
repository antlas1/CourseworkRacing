#pragma once

#ifdef RACINGLIB_EXPORTS
#define RACING_API __declspec(dllexport)
#else
#define RACING_API __declspec(dllimport)
#endif

class RACING_API Transport {
protected:
    const char* name;
    double speed;
public:
    Transport(const char* name, double speed) : name(name), speed(speed) {}
    virtual ~Transport() {}

    virtual double calculateTime(double distance) const = 0;

    const char* getName() const { return name; }
    double getSpeed() const { return speed; }

    virtual bool isGround() const = 0;
    virtual bool isAir() const = 0;
};