#include <iostream>
using namespace std;

int main()
{
    char letra;
    
    cout<<"Digite uma letra: ";
    cin>>letra;
    
    if(letra='a'||'e'||'i'||'o'||'u'){
        cout<<"É uma vogal.";
    }else{
        cout<<"É uma consoante";
    }

    return 0;
}
