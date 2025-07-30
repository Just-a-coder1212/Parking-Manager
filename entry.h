#ifndef ENTRY_H
#define ENTRY_H
#include<parking.h>
class Entry{
     vector<Parking> entries;
    void save_file(){
        ofstream output("data.txt");
        if(output.is_open()){
            for(const auto& s:entries){
                output<<"Car number : "<<s.numberplate<<endl;
            }
        }
    }
};
#endif