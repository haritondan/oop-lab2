#include <string>
#include <vector>

using namespace std;

class Employee
{
private:
    string name;
    int age;
    vector<int> tables;
public:
    Employee(string name, int age, vector<int> tables){
        this->name = name;
        this->age = age;
        this->tables = tables;
    };
};


