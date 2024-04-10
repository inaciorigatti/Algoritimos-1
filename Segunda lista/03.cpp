#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;
    
    cout<<"Forneça 3 numeros reais: ";
    cin>>n1>>n2>>n3;
    
    if(n1<=n2 && n1<=n3){
        cout<<n1<<"  é o menor número.";
    }
    if(n2<=n1 && n2<=n3){
        cout<<n2<<"  é o menor número.";
    }
    if(n3<=n1 && n3<=n2){
        cout<<n3<<"  é o menor número.";
    }
    
    return 0;
}
