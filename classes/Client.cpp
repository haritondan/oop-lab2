#include "Item.cpp"

class Client
{
private:
    Item order;
    int orderTime; 
public:
    Client(Item order, int orderTime){
        this->order = order;
        this->orderTime = orderTime;
    }
    
};

