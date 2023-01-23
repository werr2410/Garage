#include "Garage.h"

Garage::Garage() {

}

Garage::~Garage() {
    for(int i = 0; i < v_vehicle.size(); i++) 
        delete v_vehicle[i];
}

void Garage::pushInGarage(Vehicle* newItem) {
    v_vehicle.push_back(newItem);
}

void Garage::repushInGarage(int index, Vehicle* newItem) {
    if(index >= 0 && index <= v_vehicle.size()) 
        v_vehicle[index] = newItem;
    else
        puts("Index so small or so biggest that size garage");
}

Vehicle* Garage::getFromGarage(int index) const {
    if(index >= 0 && index <= v_vehicle.size()) 
        return v_vehicle[index];
    else
        puts("Index so small or so biggest that size garage");
}

void Garage::deleteFromGarage(int index) {
    if(index >= 0 && index <= v_vehicle.size()) {
        vector<Vehicle*>::iterator it = std::find(v_vehicle.begin(), v_vehicle.end(), v_vehicle[index]);

        v_vehicle.erase(it);
    }
}

void Garage::deleteFromGarage(Vehicle* deletedItem) {
        vector<Vehicle*>::iterator it = std::find(v_vehicle.begin(), v_vehicle.end(), deletedItem);

        v_vehicle.erase(it);
}

vector<Vehicle*> Garage::SearchItem(float MaxSpeed) const {
    vector<Vehicle*> tmp;

    for(int i = 0; i < v_vehicle.size(); i++) {
        if(v_vehicle[i]->getMaxSpeed() == MaxSpeed)
            tmp.push_back(v_vehicle[i]);       
    }

    return tmp;
}

vector<Vehicle*> Garage::SearchItem(string type) const {
    vector<Vehicle*> tmp;

    for(int i = 0; i < v_vehicle.size(); i++) {
        if(v_vehicle[i]->type() == type)
            tmp.push_back(v_vehicle[i]);       
    }

    return tmp;    
}

bool tmpDesc;

bool SortSpeedTmp(Vehicle* first, Vehicle* second) {
    return (tmpDesc == false ? first->getMaxSpeed() < second->getMaxSpeed() : first->getMaxSpeed() > second->getMaxSpeed());
}

void Garage::SortItemsBySpeed(bool desc = false) {
    tmpDesc = desc;

    std::sort(v_vehicle.begin(), v_vehicle.end(), SortSpeedTmp); 
}