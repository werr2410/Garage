#pragma once
#include "../Vehicle/Vehicle.cpp"
#include <iostream>

class Car : public Vehicle {
private:
    string model;
    int year;

public:
    Car();
    Car(float price, float maxPrice, string mark, string model, int year);

    void setModel(string model);
    void setYear(int year);

    string getModel() const;
    int getYear() const;

    virtual string show() const override;
    virtual string type() const override;
};

