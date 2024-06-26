#include <iostream>
using namespace std;

int main() {
    
    int tamanho=5;
    int vetor[tamanho];
    int num;
    
    cout<<"Informe numero: ";
    
    for(int i=0; i<tamanho; i++){
        cin>>vetor[i];
        
        if(vetor[0]<vetor[i]){
            num++;
        }
    }
    
    cout<<num<<" são maiores que o primeiro.";
    
  return 0;
}