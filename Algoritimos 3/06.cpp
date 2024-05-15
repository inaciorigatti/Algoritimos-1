#include <iostream>
using namespace std;

int main() {
    int i, base, potencia, resultado=1;
    
    cout<<"Digite o numero inteiro e positivo: ";
    cin>>base;
    
    cout<<"Digite o numero inteiro e positivo: ";
    cin>>potencia;
    
    
    for(i=1; i<=potencia; i++){
        resultado=resultado*base;
    }
    
    cout<<resultado;
    return 0;
}
