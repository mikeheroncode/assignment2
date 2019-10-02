#include <cstdlib>
#include "TemperamentalHorse.h"


TemperamentalHorse::TemperamentalHorse(string brand, string model, string mood) {
    setBrand(brand);
    setModel(model);
    setGearCount(gearCount);
}

TemperamentalHorse::~TemperamentalHorse() = default;

string TemperamentalHorse::getMood() {
    return Mood;
}

void TemperamentalHorse::setMood(string mood) {
    if (Mood == "good" || Mood == "fine" || Mood == "bad")
        Mood = mood;
    else{
        Mood = "unknown";
    }
}

double TemperamentalHorse::mileageEstimate(double time) {
    double mileage;
    if (Mood == "bad"){
        mileage = 0;
    }
    else if(Mood == "fine"){
        mileage = time * .25;
    }
    else if(Mood == "good"){
        mileage = time * .5;
    }
    else{
        mileage = time * (rand() % 5)/10;
    }
    return mileage;
}

string TemperamentalHorse::toString() {
    string s = "-> TemperamentalHorse\n\t";
    return "-> TemperamentalHorse\n" + Vehicle::toString() + "\n\tMood: " +
           Mood;
}