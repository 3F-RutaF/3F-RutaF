#include <iostream>
#include "gestoreRAM.h"

using namespace std;

int main() {

    GestoreContattiABC* rubrica;

    rubrica = new GestoreRAMOrdinata();

    rubrica->inizializza();

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

        if(scelta == 1) {
            rubrica->stampa();
        }

        if(scelta == 2) {
            rubrica->aggiungi();
        }

        if(scelta == 3) {
            rubrica->cerca();
        }

        if(scelta == 4) {
            rubrica->elimina();
        }

    } while(scelta != 0);

    delete rubrica;

    return 0;
}