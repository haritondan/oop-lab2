#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Kitchen
{
private:
    string item;
    vector <Kitchen *> kit;
 

public:
    Kitchen(string item){
        this->item = item;
    };

   

    Kitchen(){
        kit.push_back(new Kitchen("Calin Mircea, Chef"));
        kit.push_back(new Kitchen("Crina Sava, Executive Chef"));
        kit.push_back(new Kitchen("Mihail Cernea, Meat Section"));
        kit.push_back(new Kitchen("Irina Mihaila, Cold Section"));
        kit.push_back(new Kitchen("Alexandru Moldovan, Salad Station"));
        kit.push_back(new Kitchen("Samira Ioan, Cook Helper"));
        kit.push_back(new Kitchen("Timur Opvadenco, Cook Helper"));
        kit.push_back(new Kitchen("Ioan Sava, Sushi Station"));
        kit.push_back(new Kitchen("Ioana Chira, Sushi Station"));
    }

    string getItem(){
        return item;
    }
    

    void showKitchen()
    {
        cout << "\nKitchen's List: " << endl;
        for (int i = 0; i < kit.size(); i++)
        {
          cout << kit[i]->getItem() << endl;
     
        }
    }
};