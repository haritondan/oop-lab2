#include <iostream>
#include <vector>

using namespace std;

class Menu
{
private:
    string BreakFast = "Englezia Style \n";
    string Lunch = "Zeama UTM \n";
    string Dinner = "Pasta Submivdodo\n";

public:
    Menu(){};

    void showMenu()
    {
        cout << this->BreakFast << this->Lunch << this->Dinner << endl;
    }
};
