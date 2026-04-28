#include <iostream>
#include "contatti.h"

using namespace std;

int main() {
    inizializza();

    int scelta;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1 Stampa\n";
        cout << "2 Aggiungi\n";
        cout << "3 Cerca\n";
        cout << "4 Elimina\n";
        cout << "0 Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        if (scelta == 1) {
            stampa();
        }

        if (scelta == 2) {
            aggiungi();
        }

        if (scelta == 3) {
            cerca();
        }

        if (scelta == 4) {
            elimina();
        }

    } while (scelta != 0);

    return 0;
}