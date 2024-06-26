#include <iostream>
using namespace std;

int main() {
    
    int coluna=5;
    int linha=3;
    int matriz1[linha][coluna];
    int matriz2[linha][coluna];
    int matriz3[linha][coluna];
    
    cout<<"Informe a matriz A: ";
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            cin>>matriz1[i][j];
        }
    }
    
    cout<<"Informe a matriz B: ";
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            cin>>matriz2[i][j];
        }
    }
    
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
            cout<<matriz3[i][j]<<"\t"<<endl;
        }
    }
    
    for(int j=0; j<linha; j++){
        cout<<"Elementos da linha 2:\t"<<matriz3[1][j]<<endl;
    }
    
    for(int i=0; i<coluna; i++){
        cout<<"Elementos da coluna 2:\t"<<matriz3[i][2]<<endl;
    }
    
 
  return 0;
}

