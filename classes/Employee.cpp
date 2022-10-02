#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Employee
{
private:
    string name;
    int age;
    int table;
public:
    Employee(string name, int age, int table)
    {
        this->name = name;
        this->age = age;
        this->table = table;
    };

    string getName(){
        return this->name;
    };

    int getAge(){
        return this->age;
    }

    int getTable() {
        return this->table;
    };

    void employeeHello() {
        cout << "My name is " << this->name << ". I will be your waiter today." << endl;
    }
    
};
