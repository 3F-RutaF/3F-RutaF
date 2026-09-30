

#include "gestore.h"

GestoreContatti::GestoreContatti() {
    n = 0;
}

void GestoreContatti::inizializza() {

    char nomi[10][50] = {
        "Anna", "Carlo", "Davide", "Elena", "Franco",
        "Giulia", "Luca", "Marco", "Paolo", "Sara"
    };

    char telefoni[10][20] = {
        "111", "222", "333", "444", "555",
        "666", "777", "888", "999", "000"
    };

    for(int i=0; i<10; i++) {
        agenda[i].setNome(nomi[i]);
        agenda[i].setTelefono(telefoni[i]);
    }

    n = 10;
}

void GestoreContatti::stampa() {

    cout << "\n--- RUBRICA ---\n";

    for(int i=0; i<n; i++) {
        agenda[i].stampa();
    }
}

int GestoreContatti::cercaBinaria(char nome[]) {

    int inizio = 0;
    int fine = n - 1;

    while(inizio <= fine) {

        int centro = (inizio + fine) / 2;

        // confronto il nome cercato con quello al centro
        int confronto = strcmp(nome, agenda[centro].getNome());

        if(confronto == 0) {
            return centro;
        }

        if(confronto < 0) {
            fine = centro - 1;
        }

        if(confronto > 0) {
            inizio = centro + 1;
        }
    }

    return -1;
}

void GestoreContatti::cerca() {

    char nome[50];

    cout << "Digita il nome da cercare: ";
    cin >> nome;

    int posizione = cercaBinaria(nome);

    if(posizione == -1) {
        cout << "Non trovato\n";
    }
    else {
        cout << "Trovato: ";
        agenda[posizione].stampa();
    }
}

void GestoreContatti::aggiungi() {

    if(n >= MAX) {
        cout << "La rubrica e' piena\n";
        return;
    }

    Contatto nuovo;

    char nome[50];
    char telefono[20];

    cout << "Nome: ";
    cin >> nome;

    cout << "Telefono: ";
    cin >> telefono;

    nuovo.setNome(nome);
    nuovo.setTelefono(telefono);

    int posizione = 0;

    /*  cerco dove inserire il nuovo contatto
        per lasciare la rubrica ordinata
    */

    while(posizione < n &&
          strcmp(agenda[posizione].getNome(), nome) < 0) {

        posizione++;
    }

    // sposto gli elementi verso destra
    for(int i=n; i>posizione; i--) {
        agenda[i] = agenda[i-1];
    }

    agenda[posizione] = nuovo;

    n++;

    cout << "Contatto aggiunto\n";
}

void GestoreContatti::elimina() {

    char nome[50];

    cout << "Digita il nome da eliminare: ";
    cin >> nome;

    int posizione = cercaBinaria(nome);

    if(posizione == -1) {
        cout << "Non trovato\n";
        return;
    }

    // sposto gli elementi verso sinistra
    for(int i=posizione; i<n-1; i++) {
        agenda[i] = agenda[i+1];
    }

    n--;

    cout << "Eliminato\n";
}