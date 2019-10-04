#ifndef DRIVINGSIMULATOR_TemperamentalHorse_H
#define DRIVINGSIMULATOR_TemperamentalHorse_H

#include "Vehicle.h"

class TemperamentalHorse : public Vehicle {

private:
    string Mood;

public:
    explicit TemperamentalHorse(string brand, string model, string mood="fine");

    virtual ~TemperamentalHorse();
    virtual double mileageEstimate(double time);
    string getMood();
    void setMood(string mood);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_TemperamentalHorse_H
