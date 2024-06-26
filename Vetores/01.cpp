#include <iostream>
using namespace std;

int main()
{
    int mult2=0;
    int mult3=0;
    int vetor[5]; //declara a quantida de de posicoes no vetor 
    
    cout<<"Informe 5 numeros: ";
    
    for(int i = 1; i <= 5; i++){ //este for é para pegar os numeros 
        cin>>vetor[i]; //declara que vai ser armazenado no vetor 
    }
    
    for(int i = 1; i <= 5; i++){
        if(vetor[i]%2 == 0){
        mult2++;
        }
        if(vetor[i]%3 == 0){
        mult3++;
        }
    }
    
    cout<<mult2<<" números são multiplos de 2"<<endl;
    cout<<mult3<<" números são multiplos de 3"<<<<endl;
    
    return 0;
}