#include"storing.h"
#include<sstream>


Store::Store(){
    stored=load();
}

void Store::save(){
    ofstream output_file("Data.txt");
    if(output_file.is_open()){
        
        for (const auto& s:stored){

            output_file<<s.numberplate<<"."<<endl;
           
        }
        output_file.close();
    }
    
}

void Store::view(){
    for (auto s: stored){
        s.displayEntry();
    }
 
}

vector<Parking> Store::load(){
    ifstream input("Data.txt");
    if(input.is_open()){
        string line ;
        while(getline(input,line)){
            stringstream getting_line(line);
            string car_number;
            if(getline(getting_line,car_number,'.')){
                loaded.push_back(car_number);
            }
        }
        input.close();
    }
    return loaded;
}
int Store::find(string numberplat){
        for( unsigned int i=0;i<stored.size();i++){
            if(stored[i].numberplate==numberplat){
                return i;   
            }  
    }
    return -1;

}

void Store::remove(int i){
    if(i!=-1){
        loaded.erase(loaded.begin()+i);
            stored.erase(stored.begin()+i);
    }
    else{
        cout<<"NO sunch entry found"<<endl;
    }
        
}
