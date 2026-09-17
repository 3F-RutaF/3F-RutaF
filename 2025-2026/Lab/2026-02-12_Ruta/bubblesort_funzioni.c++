#include <iostream>
using namespace std;

void ordinamentoElementi_vettori(int numeri[]) {

    int scambio;
    
    cout << "Inserisci 10 numeri interi:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> numeri[i];
    }

    // Bubble sort
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(numeri[j] > numeri[j+1]) {
                scambio = numeri[j];
                numeri[j] = numeri[j+1];
                numeri[j+1] = scambio;
            }
        }
    }

    cout << "Numeri ordinati in ordine crescente:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << numeri[i] << endl;
    }
}

int main() {
     
    int numeri[10];

    ordinamentoElementi_vettori(numeri);

    return 0;
}
