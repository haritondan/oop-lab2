#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Reservation
{
private:
    string client;
    int time;
    string timeStamp;
    vector<Reservation *> reserv;

public:
    Reservation(string client, int time, string timeS){
        this->client = client;
        this->time = time;
        this->timeStamp = timeS;
    }
    Reservation(){
        reserv.push_back(new Reservation("Daniel Shiffman", 5, "PM"));
        reserv.push_back(new Reservation("Itachi Uchiha", 8, "PM"));
        reserv.push_back(new Reservation("Shindeiru Dov", 11, "AM"));
    }

    string getClient(){
        return client;
    }

    string getTimeS(){
        return timeStamp;
    }

    int getTime(){
        return time;
    }

    void reservList(){
        cout << "\nReservation's List" << endl;
        for (int i = 0; i < reserv.size(); i++)
        {
            cout << "Reserved table for " << reserv[i]->getClient() << " at " << reserv[i]->getTime() << " " << reserv[i]->getTimeS() << endl;
        }
        
        
    }

   
};    
