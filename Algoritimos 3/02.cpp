#include <iostream>
using namespace std;

int main()
{
    int i, soma=0, valor;
    
    cout<<"10 valores inteiros para realizar a soma deles: ";
    
    for(i=0; i < 10; i++){
        cin>>valor;
        soma=soma+valor;
    }
    
    cout << "A soma dos valores é: " << soma << endl;
    
    return 0;
}