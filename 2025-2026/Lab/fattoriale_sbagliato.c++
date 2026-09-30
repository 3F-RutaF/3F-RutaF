#include <iostream>
using namespace std;

// Funzione ricorsiva per il fattoriale
int fattoriale(int n) {
    int ret=n*fattoriale(n-1);
    if (n == 0 || n == 1)
        return 1;
    else
        // Passo ricorsivo
        return ret;
}

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    cout << "Il fattoriale di " << numero << " è: " 
         << fattoriale(numero) << endl;

    return 0;
}
