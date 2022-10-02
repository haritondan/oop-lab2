#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Menu
{
private:
    string item;
    vector <Menu *> menu;

public:
    Menu(string item){
        this->item = item;
    };

    Menu(){
        menu.push_back(new Menu("Englezia Style"));
        menu.push_back(new Menu("Zeama UTM"));
        menu.push_back(new Menu("Pasta Submivdodo"));
    }

    string getItem(){
        return item;
    }
    

    void showMenu()
    {
        cout << "\nKitchen's Menu: " << endl;
        for (int i = 0; i < menu.size(); i++)
        {
          cout << menu[i]->getItem() << endl;
     
        }
    }
};
