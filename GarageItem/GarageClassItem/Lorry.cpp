#include "Lorry.h"

Lorry::Lorry()
    : Vehicle() {
    setGabarit("0x0x0");
    setLoadCapacity(0);
}

Lorry::Lorry(float price, float maxPrice, string mark, string gabarit, int loadCapacity) 
    : Vehicle(price, maxPrice, mark) {
    setGabarit(gabarit);
    setLoadCapacity(loadCapacity);
}

string Lorry::getGabarit() const {
    return gabarit;
}

int Lorry::getLoadCapacity() const {
    return loadCapacity;
}

void Lorry::setGabarit(string gabarit) {
    this->gabarit = gabarit;
}

void Lorry::setLoadCapacity(int loadCapacity) {
    this->loadCapacity = loadCapacity;
}

string Lorry::show() const {
    string resualt;

    resualt += "Car DATA: \n";
    resualt += "Mark: " + mark + '\n';
    resualt += "MaxSpeed: ";
    resualt += std::to_string(maxSpeed) + '\n';
    resualt += "Gabarit: " + gabarit + " \n";
    resualt += "Price: ";
    resualt += std::to_string(price) + '\n';
    resualt += "Year: " + std::to_string(loadCapacity) + " \n";

    return resualt;
}

string Lorry::type() const {
    return "Lorry";
}