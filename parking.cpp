#include"parking.h"
Parking::Parking(string number):
    numberplate(number)
{
}
void Parking::displayEntry(){
    cout<<"Car number : "<<numberplate<<endl;
}