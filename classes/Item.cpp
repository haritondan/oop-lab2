#include <string>

using namespace std;
class Item
{
private:
    int price;
    string name;
public:
    Item(int price, string name){
        this->name = name;
        this->price = price;
    };
};

