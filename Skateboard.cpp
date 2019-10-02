#include <cstdlib>
#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

int Skateboard::getGearCount() {
    return myGearCount;
}

void Skateboard::setGearCount(int gearCount) {
    myGearCount = gearCount;
}

double Skateboard::mileageEstimate(double time) {
    double milesPerMin = (rand()%5 + 1) / 10;
    double mileage = milesPerMin * time;
    if (time > 25 && time < 250){
        mileage += (rand()%3 + 1) / 3 * time
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}