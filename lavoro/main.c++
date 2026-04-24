#include <iostream>
#include <cstring>
using namespace std;

struct Contatto {
    char nome[50];
    char telefono[20];
};

const int MAX = 100;
Contatto agenda[MAX];
int n = 0;

// creazione di 10 contatti di default
void inizializza() {
    for (int i = 0; i < 10; i++) {
        strcpy(agenda[i].nome, "Nome");    
        strcpy(agenda[i].telefono, "12345");
    }
    n = 10;
}


void stampa() {
    for (int i = 0; i < n; i++) {
        cout << i << ") "
             << agenda[i].nome << " - "
             << agenda[i].telefono << endl;
    }
}


void aggiungi() {
    if (n >= MAX) {
        cout << "La rubrica è piena\n";
        return;
    }

    cout << "Nome: ";
    cin >> agenda[n].nome;

    cout << "Telefono: ";
    cin >> agenda[n].telefono;

    n++;
}


void cerca() {
    char nome[50];
    cout << "Digita il nome da cercare: ";
    cin >> nome;

    for (int i = 0; i < n; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            cout << "Trovato: "
                 << agenda[i].nome << " - "
                 << agenda[i].telefono << endl;
            return;
        }
    }

    cout << "Non trovato\n";
}


void elimina() {
    char nome[50];
    cout << "Digita il nome da eliminare: ";
    cin >> nome;

    for (int i = 0; i < n; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {

            
            for (int j = i; j < n - 1; j++) {
                agenda[j] = agenda[j + 1];
            }

            n--;
            cout << "Eliminato\n";
            return;
        }
    }

    cout << "Non trovato\n";
}

int main() {
    inizializza();

    int scelta;

    do {
        cout << "\n1 Stampa\n2 Aggiungi\n3 Cerca\n4 Elimina\n0 Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) stampa();
        if (scelta == 2) aggiungi();
        if (scelta == 3) cerca();
        if (scelta == 4) elimina();

    } while (scelta != 0);

    return 0;
}