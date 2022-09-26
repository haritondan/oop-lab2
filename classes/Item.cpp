#pragma once
#include <string>

using namespace std;
class Item
{
private:
    int price;
    string name;
    int cookingTime;
public:
    Item(){};
    Item(int price, string name, int cookingTime){
        this->name = name;
        this->price = price;
        this->cookingTime = cookingTime;
    };
};

