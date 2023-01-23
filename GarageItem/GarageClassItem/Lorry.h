#pragma once
#include "../Vehicle/Vehicle.cpp"

class Lorry : public Vehicle {
private:
    string gabarit;
    int loadCapacity;

public:
    Lorry();
    Lorry(float price, float maxPrice, string mark, string gabarit, int loadCapacity);

    void setGabarit(string gabarit);
    void setLoadCapacity(int loadCapacity);

    string getGabarit() const;
    int getLoadCapacity() const;

    virtual string show() const override;
    virtual string type() const override;
};

