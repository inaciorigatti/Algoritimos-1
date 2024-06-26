#include <iostream>
using namespace std;

int main() {
    
    int tamanho=5;
    int vetor[tamanho];
    int vetor2[tamanho];
    int vetor3[tamanho];
    int x;
    
    cout<<"Informe 1o vetor: ";
    for(int i=0; i<tamanho; i++){
        cin>>vetor[i];
    }
    
    cout<<"Informe 2o vetor: ";
    for(int j=0; j<tamanho; j++){
        cin>>vetor2[j];
        }
    
   
   for(int p=0; p<tamanho; p++){
    vetor3[x]=vetor2[p]*vetor[p];
    cout<<vetor3[x];
    cout<<"\t";
   }
   
  return 0;
}
