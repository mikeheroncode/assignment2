#include <cstdlib>
#include "Jet.h"

Jet::Jet() {
    numberOfEngines = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numOfEngines) {
    numberOfEngines = numOfEngines;
}

double Jet::mileageEstimate(double time) {
    double mileage = (rand()%60 + 40) * time;
    if (fuelType == "Rocket" && numberOfEngines > 2) {
        for (i=0; i<numberOfEngines-2; i++){
            mileage += mileage * 0.055;
        }
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getNumberOfEngines();
}