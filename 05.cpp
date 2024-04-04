#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float salario, salarioDesc, conta1, conta2, calculo;
    
    cout << "Informe seu salário: ";
    cin >> salario;
    
    cout << "Informe o valor da primeira conta: ";
    cin >> conta1;
    
    cout << "Informe o valor da segunda conta: ";
    cin >> conta2;
    
    calculo = ((conta1*0.02)+(conta2*0.02)+conta1+conta2);
    salarioDesc = salario - calculo;
    
    cout << "O valor das contas com juros é: "<< calculo;
    cout << "\n O salario final é de: "<<salarioDesc;
    
    
    
    return 0;
}
