#include "Bicycle.h"
#include <iostream>




Bicycle::Bicycle() 
    : Vehicle() {
    setTypeModel("NO DATA");
}

Bicycle::Bicycle(float price, float maxPrice, string mark, string typeModel) 
    : Vehicle(price, maxPrice, mark) {
    setTypeModel(typeModel);
}

string Bicycle::getTypeModel() const {
    return typeModel;
}

void Bicycle::setTypeModel(string TypeModel) {
    this->typeModel = TypeModel;
}

string Bicycle::show() const {
    string resualt;

    resualt += "Bicycle DATA: \n";
    resualt += "Model: " + typeModel + '\n';
    resualt += "Mark: " + mark + '\n';
    resualt += "MaxSpeed: ";
    resualt += std::to_string(maxSpeed) + '\n';
    resualt += "Price: ";
    resualt += std::to_string(price) + '\n';

    return resualt;
}

string Bicycle::type() const {
    return "Bicycle";
}