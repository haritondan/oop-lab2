#pragma once
class Table
{
private:
    int number;
public:
    Table(int number){
        this->number = number;
    };

    int getNumber(){
        return this->number;
    }
};
