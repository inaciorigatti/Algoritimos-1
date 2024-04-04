#include <iostream>
using namespace std;

int main()
{
    int n, u, d, c, m, dm, nn;
    
    cout<<"Digite um númerro de 5 digitos: ";
    cin>>n;
    
    u=n%10;
    nn=n/10;
    
    d=n%10;
    nn=n/10;
    
    c=n%10;
    nn=n/10;
    
    m=n%10;
    nn=n/10;
    
    dm=n%10;
    nn=n/10;
    
    cout<<"Seu número original é: "<<n;
    cout<<"Seu número invertido é: "<<dm<<m<<c<<d<<u;
    

    return 0;
    
}
