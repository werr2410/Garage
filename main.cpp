#include <iostream>
#include "GarageItem/Vehicle/Vehicle.cpp"

using namespace std;

int main() {
    Vehicle obj;


    cout << obj.getMark() << endl;
    cout << obj.getMaxSpeed() << endl;
    cout << obj.getPrice() << endl;

    obj.setMark("DATA");
    obj.setMaxSpeed(300.0f);
    obj.setPrice(300.0f);

    cout << obj.getMark() << endl;
    cout << obj.getMaxSpeed() << endl;
    cout << obj.getPrice() << endl;

    return 0;
}