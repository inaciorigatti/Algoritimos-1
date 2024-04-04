#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    
    int a;
    a = n;
    a = a%4;
    a = pow (a,3);
    cout << a;
    a = a / a;
    a = a - a;
    
    return 0;
}
