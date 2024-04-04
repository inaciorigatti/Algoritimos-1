#include <iostream>
using namespace std;

int main()
{
    int saque;
    int nota10, nota5, nota1;
    
    cout<<"Informe o valor do saque: ";
    cin>>saque;
    
    nota10= saque/10;
    nota5= (saque%10)/5;
    nota1= (saque%10)%10;
    
    cout<<"Notas de 10: "<<nota10<<endl;
    cout<<"Notas de 5: "<<nota5<<endl;
    cout<<"Notas de 1: "<<nota1<<endl;
    
    return 0;
    
}
