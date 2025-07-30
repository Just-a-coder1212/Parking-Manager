#ifndef PARKING_H
#define PARKING_H
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

class Parking{
    int place_number{};
    
    public:
    Parking ()=default;
    string numberplate{"None"};
    Parking(string number);
    string get_plate(){
        return numberplate;
    }
    void displayEntry();
    

};


#endif