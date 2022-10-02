#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Bar
{
private:
    string item; 
    vector <Bar *> bar;

public:
    Bar(string item){
        this->item = item;
        
    };

    Bar(){
        bar.push_back(new Bar("Martini Elite"));
        bar.push_back(new Bar("Enzo"));
        bar.push_back(new Bar("Aperol"));
    }

    string getItem(){
        return item;
    }
    

    void showBar()
    {
        cout << "\nBar Menu: " << endl;
        for (int i = 0; i < bar.size(); i++)
        {
          cout << bar[i]->getItem() << endl;
        }
    }
};