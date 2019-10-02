#include "Bicycle.h"


Bicycle::Bicycle(string brand, string model, int gearCount=3) {
    setBrand(brand);
    setModel(model);
    setGearCount(gearCount);
}

Bicycle::~Bicycle() = default;

string Bicycle::getMood() {
    return Mood;
}

void Bicycle::setMood(string mood) {
    if (Mood == "good" || Mood == "fine" || Mood == "bad")
        Mood = mood;
    else{
        Mood = "unknown";
    }
}

double Bicycle::mileageEstimate(double time) {
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

string Bicycle::toString() {
    string s = "-> Bicycle\n\t";
    return "-> Bicycle\n" + Vehicle::toString() + "\n\tMood: " +
           Mood;
}