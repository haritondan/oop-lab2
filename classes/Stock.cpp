#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stock
{
private:
    string item;
    int level;
    vector <Stock *> stock;
 

public:
    Stock(string item, int level){
        this->item = item;
        this->level = level;
    };

   

    Stock(){
        stock.push_back(new Stock("Table Resourses", 1 + (rand() % 100)));
        stock.push_back(new Stock("Bar", 1 + (rand() % 100)));
        stock.push_back(new Stock("Kitchen", 1 + (rand() % 100)));
        stock.push_back(new Stock("Sushi", 1 + (rand() % 100)));
    }

    string getItem(){
        return item;
    }

    int getLevel(){
        return level;
    }
    

    void stockLevels()
    {
        cout << "\nStock: " << endl;
        for (int i = 0; i < stock.size(); i++)
        {
          cout << stock[i]->getItem() << " has "<< stock[i]->getLevel() << "%, of it's  stock left." << endl;
     
        }
    }
};