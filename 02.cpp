#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float valor1, valor2, media;
    
    cout << "Informe o primeiro valor:";
    cin >> valor1;
        
    cout << "Informe o segundo valor:";
    cin >> valor2;
    
    media = (valor1+valor2)/2;
    
    cout << "A média do aluno é: "<< media;
    
    return 0;
}
