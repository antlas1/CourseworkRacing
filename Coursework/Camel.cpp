#include "Camel.h"
#include <cmath>
#include <algorithm>

Camel::Camel()
    : GroundTransport("Верблюд", 10, 30) {
}

double Camel::calculateTime(double distance) const {
    double totalTime = 0.0;
    double remainingDistance = distance;

    while (remainingDistance > 0) {
        double segmentDistance = std::min(remainingDistance, speed * moveTime);
        double segmentTime = segmentDistance / speed;
        totalTime += segmentTime;
        remainingDistance -= segmentDistance;

        if (remainingDistance > 0) {
            if (totalTime == moveTime) {
                totalTime += 5.0;
            }
            else { 
                totalTime += 8.0;
            }
        }
    }

    return totalTime;
}