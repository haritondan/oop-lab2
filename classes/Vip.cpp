#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Vip
{
private:
    string item;
    vector <Vip *> vip;
 

public:
    Vip(string item){
        this->item = item;
    };

   

    Vip(){
        vip.push_back(new Vip("Calin Mircea, General Director"));
        vip.push_back(new Vip("Crina Sava, Executive Director"));
        vip.push_back(new Vip("Mihail Cernea, Assistant Director"));
        vip.push_back(new Vip("Irina Mihaila, Assistant Director"));
        vip.push_back(new Vip("Alexandru Moldovan, VIP"));
        vip.push_back(new Vip("Samira Ioan, VIP"));
        vip.push_back(new Vip("Timur Opvadenco, VIP"));
    }

    string getItem(){
        return item;
    }
    

    void showvip()
    {
        cout << "\nVip's List: " << endl;
        for (int i = 0; i < vip.size(); i++)
        {
          cout << vip[i]->getItem() << endl;
     
        }
    }
};