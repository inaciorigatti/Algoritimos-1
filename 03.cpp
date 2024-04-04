#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float qnt_cavalos, ferraduras;
    
    cout << "Quantos cavalos vivem nas harpas? ";
    cin >> qnt_cavalos;
    
    ferraduras = qnt_cavalos*4;
    
    cout << "A quantidade de ferraduras necessarias são: "<< ferraduras;
    
    return 0;
}
