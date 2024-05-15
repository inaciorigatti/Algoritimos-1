#include <iostream>
using namespace std;

int main()
{
    int chico=150, ze=110, anos=0;
    
    do{
        chico=chico+2;
        ze=ze+3;
        anos++;
        
    }while(chico>=ze);

    cout<<"Serão necessários "<<anos<<" anos.";
    return 0;
}
