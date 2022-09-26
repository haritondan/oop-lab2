#include <string>
#include <vector>
#include "Table.cpp"

using namespace std;

class Employee
{
private:
    string name;
    int age;
    vector<Table*> tables;
public:
    Employee(string name, int age){
        this->name = name;
        this->age = age;
    };
    void addTables(Table* tables){
        this->tables.push_back(tables);
    };
};


