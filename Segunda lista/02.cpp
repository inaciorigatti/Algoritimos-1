#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout<<"Digite dois numeros inteiros: ";
    cin>>n1>>n2;
    
    if(n1==n2){
        cout<<"Os números são iguais"; 
        return 0;
    }
    
    if(n1>=n2 && n2<=n1){
        cout<<n1<<" é maior que "<<n2;
    }
    else{
        cout<<n2<<" é maior que "<<n1;
    }
    return 0;
}
