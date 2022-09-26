#include <vector>
#include "Item.cpp"

class Menu
{
private:
    vector<Item> items; 
public:
    Menu(){
        Item Breakfast = Item(50, "Mic de jun ca la Englezia");
        Item Lunch = Item(30, "Zama ca la UTM");
        Item Dinner = Item(50, "Pasta ca la Italiano");
    };
    ~Menu();
};



