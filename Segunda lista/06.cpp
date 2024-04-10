#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,x,x1,delta;
    
    cout<<"Digite os valores de A, B e C: ";
    cin>>a>>b>>c;
    
    delta=b*b-4*a*c;
    
    if(delta<=0){
        cout<<"Não existe";
    }else{
    
    x=(-b+sqrt(delta))/(2*a);
    x1=(-b-sqrt(delta))/(2*a);
    
    cout<<"X1 é "<<x<<" e   X2 é "<<x1;}
    
    return 0;
}
