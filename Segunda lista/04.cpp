#include <iostream>
using namespace std;

int main()
{
    int dia, mes, ano, dia1, mes1, ano1, calcDia, calcMes, calcAno;
    
    cout<<"Digite a data de Nascimento (dia/mes/ano): ";
    cin>>dia>>mes>>ano;
    
    cout<<"Digite a data de hoje (dia/mes/ano): ";
    cin>>dia1>>mes1>>ano1;
    
    calcDia=dia1-dia;
    calcMes=mes1-mes;
    calcAno=ano1-ano;
    
    if(calcDia==0 && calcMes==0){
        cout<<calcAno<<" anos.";
    }else{
        cout<<calcAno-1<<" anos";
    }
}  
    
    return 0;
