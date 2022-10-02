#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Delivery
{
private:
    string item;
    vector <Delivery *> delmenu;

public:
    Delivery(string item){
        this->item = item;
    };

    Delivery(){
        delmenu.push_back(new Delivery("Englezia Style"));
        delmenu.push_back(new Delivery("Zeama UTM"));
        delmenu.push_back(new Delivery("Pasta Submivdodo"));
    }

    string getItem(){
        return item;
    }
    

    void showDelmenu()
    {
        cout << "\nDelivery: " << endl;
        for (int i = 0; i < delmenu.size(); i++)
        {
          cout << delmenu[i]->getItem() << endl;
     
        }
    }
};
