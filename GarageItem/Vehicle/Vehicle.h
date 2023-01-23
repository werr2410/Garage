#pragma once
#include <string>

using std::string;

class Vehicle {
protected:
    float price;
    float maxSpeed;
    string mark;

public:
    Vehicle();
    Vehicle(float price, float maxPrice, string mark);

    void setPrice(float price);
    void setMaxSpeed(float maxSpeed);
    void setMark(string mark);

    float getPrice() const;
    float getMaxSpeed() const;
    string getMark() const;

    // virtual string show() const = 0;
    // virtual string type() const = 0;
};
