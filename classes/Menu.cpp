#pragma once
#include <vector>
#include "Item.cpp"

class Menu
{
private:
    vector<Item> items; 
public:
    Menu(){
        Item Breakfast = Item(50, "Mic de jun ca la Englezia", 5);
        Item Lunch = Item(30, "Zama ca la UTM", 5);
        Item Dinner = Item(35, "Pasta ca la Italiano", 6);
        items.push_back(Breakfast);
        items.push_back(Lunch);
        items.push_back(Dinner);
    };

};



