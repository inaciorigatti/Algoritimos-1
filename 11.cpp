#include <iostream>
using namespace std;

int main()
{
    int ano;
    
    cout<<"O ano é bissexto? ";
    cin>>ano;
    
    if(ano%4==0 && ano%100!=0 || ano%400!=0){
        cout<<"O ano é bissexto";
    }
    else{
        cout<<"Não é bissexto";
    }
    return 0;
    
}
