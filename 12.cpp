#include <iostream>
using namespace std;

int main() {
    int funcionariosSalario;
    int funcionarios;
    int bicicletasVendidas;
    int bicicletasPreco;
    int bicicletaVenda;
    int margem;
    int salarioIndividual;
    
    cout << "Quantos funcionarios estão empregados? ";
    cin >> funcionarios;
    
    cout << "Quantas bicicletas foram vendidas? ";
    cin >> bicicletasVendidas;
    
    cout << "Preço de custo das bicicletas vendidas? ";
    cin >> bicicletasPreco;
    
    bicicletaVenda = (bicicletasVendidas * bicicletasPreco) * 0.5;
    funcionariosSalario = funcionarios * 2824;
    margem = bicicletaVenda * 0.15;
    salarioIndividual = (funcionariosSalario + margem) / funcionarios;
    lucro = bicicletaVenda-margem;
    
    cout << "Vendas de bicicletas: " << bicicletaVenda << endl;
    cout << "Salário individual: " << salarioIndividual << endl;
    cout<< "Lucro liquido: "<< lucro;

    return 0;
}
