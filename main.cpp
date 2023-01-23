#include <iostream>
#include "GarageItem/GarageClassItem/Bicycle.cpp"

using namespace std;

int main() {
    Bicycle obj(100, 200, "proX", "m100");

    cout << obj.show() << endl;

    return 0;
}