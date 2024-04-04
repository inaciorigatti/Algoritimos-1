#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float queijoTotal, presuntoTotal, hamburguerTotal;
    int quantidade;
    float queijo = 100;
    float presunto = 50;
    float hamburguer = 100;
    
    cout << "Infome a quantidade de sanduíches: ";
    cin >> quantidade;
    
    queijoTotal = (queijo*quantidade)/1000;
    presuntoTotal = (presunto*quantidade)/1000;
    hamburguerTotal = (hamburguer*quantidade)/1000;
    
    cout << "Serão necessários comprar(Kg): \n ";
    cout << "\nQueijo: "<<queijoTotal;
    cout << "\nPresunto: "<<presuntoTotal;
    cout << "\nHambúger: "<<hamburguerTotal;
    
    return 0;
}
