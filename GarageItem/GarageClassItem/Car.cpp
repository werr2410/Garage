#include "Car.h"

Car::Car() 
    : Vehicle() {
    setModel("NO DATA");
    setYear(1001);
}

Car::Car(float price, float maxPrice, string mark, string model, int year) 
    : Vehicle(price, maxPrice, mark) {
    setModel(model);
    setYear(year);
}

string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

void Car::setModel(string model) {
    this->model = model;
}

void Car::setYear(int year) {
    if(year >= 0)
        this->year = year;
    else
        this->year = 0;
}

string Car::show() const {
    string resualt;

    resualt += "Car DATA: \n";
    resualt += "Model: " + model + '\n';
    resualt += "Mark: " + mark + '\n';
    resualt += "MaxSpeed: ";
    resualt += std::to_string(maxSpeed) + '\n';
    resualt += "Price: ";
    resualt += std::to_string(price) + '\n';
    resualt += "Year: " + std::to_string(year) + " \n";

    return resualt;
}

string Car::type() const {
    return "Car";
}