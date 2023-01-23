#pragma once
#include "../GarageClassItem/Bicycle.cpp"
#include "../GarageClassItem/Car.cpp"
#include "../GarageClassItem/Lorry.cpp"
#include <vector>
#include <algorithm>

using std::vector;

class Garage {
private:
    vector<Vehicle*> v_vehicle;

public:
    Garage();

    ~Garage();

    void pushInGarage(Vehicle* newItem);

    void repushInGarage(int index, Vehicle* newItem);

    Vehicle* getFromGarage(int index) const;

    void deleteFromGarage(Vehicle* deletedItem);
    void deleteFromGarage(int index);

    vector<Vehicle*> SearchItem(string type) const;
    vector<Vehicle*> SearchItem(float MaxSpeed) const;

    void SortItemsBySpeed(bool desc = false);
};
