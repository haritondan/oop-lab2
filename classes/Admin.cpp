#pragma once
#include <vector>
#include "Employee.cpp"
using namespace std;

class Admin
{
private:
    vector<Employee *> waiters;

public:
    Admin()
    {
        waiters.push_back(new Employee("Sorin ", 25, 1));
        waiters.push_back(new Employee("Andrei ", 35, 2));
        waiters.push_back(new Employee("Daniela ", 55, 3));
        waiters.push_back(new Employee("Mihaela ", 20, 4));
       
    };
    
    void listWaiters() {
        cout << "Waiters List: " << endl;
        for (int i = 0; i < waiters.size(); i++)
        {
          cout << waiters[i]->getName() << "is " << waiters[i]->getAge() << "years old and has the table " << waiters[i]->getTable() << endl;
        }
        
    }
};
