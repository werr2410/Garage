#pragma once
#include "../Vehicle/Vehicle.cpp"

class Bicycle : public Vehicle {
private:
    string typeModel;

public:
    Bicycle();
    Bicycle(float price, float maxPrice, string mark, string typeModel);

    void setTypeModel(string TypeModel);
    string getTypeModel() const;

    virtual string show() const override;
    virtual string type() const override;
};
