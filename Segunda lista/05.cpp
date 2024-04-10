#include <iostream>
using namespace std;

int main()
{
    int l1,l2,l3;
    
    cout<<"Informe os lados do triangulo: ";
    cin>>l1>>l2>>l3;
    
    if(l1==l2 && l2==l3){
        cout<<"É um triangulo equilatero";
    }
    if(l1==l2 || l1==l3 || l2==l3){
        cout<<"É um triangulo isoceles";
    }else{
        cout<<"É um triangulo escaleno";
    }
    return 0;
}
