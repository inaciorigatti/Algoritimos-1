#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    float nota1, nota2, nota3, media;
    
    cout << "Informe a primeira nota: ";
    cin >> nota1;
    
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    
    cout << "Informe a terceira nota: ";
    cin >> nota3;
    
    media = ((nota1*2)+(nota2*4)+(nota3*6))/10;
    
    cout << "A media do aluno é: "<<media;
  return 0;
}
