#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  float distancia, consumo, preco, autonomia, custo;

  cout << "Qual será a distancia percorrida(Km)?";
  cin >> distancia;

  cout << "Qual é o consumo do carro? (Km/L)";
  cin >> consumo;

  cout << "Qual é o preço do combustível? ";
  cin >> preco;

  autonomia = distancia / consumo;
  custo = autonomia * preco;
  
  cout << "O valor gasto em combustível é: "<<custo;
  return 0;
}
