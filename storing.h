#ifndef STORING_H
#define STORING_H

#include"parking.h"
#include<fstream>

class Store{
    public:
    Store();
   
    vector<Parking> loaded;
    vector<Parking> stored;
    void save();
    void view();
    int find(string numberplat);
    void remove(int i);
    //This is for previously stored entries
    vector<Parking> load();


};

#endif