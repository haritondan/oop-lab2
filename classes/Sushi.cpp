#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Sushi
{
private:
    string item; 
    vector <Sushi *> sushi;

public:
    Sushi(string item){
        this->item = item;
        
    };

    Sushi(){
        sushi.push_back(new Sushi("Drangon Rolls"));
        sushi.push_back(new Sushi("Puke Bolls"));
        sushi.push_back(new Sushi("Shashimi and Nighiri"));
    }

    string getItem(){
        return item;
    }
    

    void showSushi()
    {
        cout << "\nSushi Menu: " << endl;
        for (int i = 0; i < sushi.size(); i++)
        {
          cout << sushi[i]->getItem() << endl;
        }
    }
};