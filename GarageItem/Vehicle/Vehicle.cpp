#include "Vehicle.h"

#include <string>

using std::string;

Vehicle::Vehicle() {
    setPrice(0.f);
    setMaxSpeed(0.f);
    setMark("NO DATA");
}

Vehicle::Vehicle(float price, float maxPrice, string mark) {
    setPrice(price);
    setMaxSpeed(maxPrice);
    setMark(mark);
}

void Vehicle::setPrice(float price) {
    if(price >= 0)
        this->price = price;
    else 
        this->price = 0;
}

void Vehicle::setMaxSpeed(float maxSpeed) {
        if(maxSpeed >= 0)
        this->maxSpeed = maxSpeed;
    else 
        this->maxSpeed = 0;
}

void Vehicle::setMark(string mark) {
    this->mark = mark;
}

float Vehicle::getPrice() const {
    return price;
}

float Vehicle::getMaxSpeed() const {
    return maxSpeed;
}

string Vehicle::getMark() const {
    return mark;
}
