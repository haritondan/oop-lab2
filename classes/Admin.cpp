#include <vector>
#include "Table.cpp"
#include "Employee.cpp"
using namespace std;

class Admin
{
private:
   vector<Table*> tables;
   vector<Employee*> waiters;
public:
    Admin(){
        waiters.push_back(new Employee("Sorin", 25));
        waiters.push_back(new Employee("Andrei", 25));
        waiters.push_back(new Employee("Daniela", 25));
        for (int i = 0; i < 12; i++)
        {
            tables.push_back(new Table(i));
            waiters[i/3]->addTables(tables.back());
        }
        
    };
    
};


