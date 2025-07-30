#include "parking.h"
#include"storing.h"
void intro(){
    cout<<"Welcome to parking manager"<<endl;
    
}
bool check(string num){

    if(num.length()!=10){
        return false;
    }
    if(!(isalpha(num[0])&& isalpha(num[1])&&isalpha(num[4])&& isalpha(num[5]))){
        return false;
    }
    if(!(isdigit(num[2])&& isdigit(num[3])&&isdigit(num[6])&& isdigit(num[7])&&isdigit(num[8])&& isdigit(num[9]))){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    
    intro();
    Store Dummy;
    bool cont=true;
    while (cont){
        cout<<"Please select"<<endl<<"1.Buy ticket for parking"<<endl<<"2.Exit the parking "<<endl<<"3.View Entries "<<endl<<"4.Delete entry"<<endl;
        int input{};
        cin>>input;
        
        string input_num;
        switch (input)
        {
        case 1:
                Dummy.load();
             if (Dummy.stored.size()<10){
                string num;
                cout<<"Enter car number in capital letters :  ";
                cin>>num;
                int already=Dummy.find(num);
            
                if(check(num)){
                        if(already==-1){
                            Parking entry(num);
                            Dummy.stored.push_back(entry);
                            Dummy.save();
                        }
                        else{
                            cout<<"Car number already exists"<<endl;
                        }
                    }
                    else{
                        cout<<"INVALID Car number "<<endl;
                    }

            }
            else{
                cout<<"NO space left"<<endl;
            }
            continue;
        case 2:
            cont=false;
            break;
        case 3:
            
            Dummy.view();
            continue;
        case 4:
        cout<<"Enter the numberplate : "<<endl;
        cin>>input_num;
            Dummy.remove(Dummy.find(input_num));
            Dummy.save();
            continue;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    
    return 0;
}
