#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int valores[SIZE];

    // Leitura dos valores
    cout << "Digite 5 valores inteiros:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> valores[i];
    }

    // Verificação do número 7 no vetor
    int contador = 0;
    cout << "O número 7 foi encontrado nas posições: ";
    for (int i = 0; i < SIZE; i++) {
        if (valores[i] == 7) {
            cout << i << " ";
            contador++;
        }
    }

    if (contador == 0) {
        cout << "O número 7 não foi encontrado no vetor.";
    } else {
        cout << "\nO número 7 foi encontrado " << contador << " vez(es).";
    }

    cout << endl;
    return 0;
}
