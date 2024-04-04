#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int a, b;
    
    cout << "Informe a: ";
    cin >> a;
    cout << "Informe b: ";
    cin >> b;
    
    a = 1;
    b = a + 1;
    a = a + b;
    cout << a << "\n" <<b;
    b = b + 3 * a;
    a = b;
    
  return 0;
}
