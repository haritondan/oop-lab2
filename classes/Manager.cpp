#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Manager
{
private:
    string name;
public:
    Manager(string name){
        this->name = name;
    };

    string getName() {
        return name;
    }
    

    void callManager(){
        cout << "\nMy name is " << this->getName() << ". How can I help you?" << endl;
    }
};


