#include <iostream>
#include <cstring>
#include "contatti.h"

using namespace std;

Contatto agenda[MAX];
int n = 0;

void inizializza() {
    strcpy(agenda[0].nome, "Anna");
    strcpy(agenda[0].telefono, "111");

    strcpy(agenda[1].nome, "Carlo");
    strcpy(agenda[1].telefono, "222");

    strcpy(agenda[2].nome, "Davide");
    strcpy(agenda[2].telefono, "333");

    strcpy(agenda[3].nome, "Elena");
    strcpy(agenda[3].telefono, "444");

    strcpy(agenda[4].nome, "Franco");
    strcpy(agenda[4].telefono, "555");

    strcpy(agenda[5].nome, "Giulia");
    strcpy(agenda[5].telefono, "666");

    strcpy(agenda[6].nome, "Luca");
    strcpy(agenda[6].telefono, "777");

    strcpy(agenda[7].nome, "Marco");
    strcpy(agenda[7].telefono, "888");

    strcpy(agenda[8].nome, "Paolo");
    strcpy(agenda[8].telefono, "999");

    strcpy(agenda[9].nome, "Sara");
    strcpy(agenda[9].telefono, "000");

    n = 10;
}

void stampa() {
    cout << "\n--- RUBRICA ---\n";

    for (int i = 0; i < n; i++) {
        cout << i << ") "
             << agenda[i].nome << " - "
             << agenda[i].telefono << endl;
    }
}

int cercaBinaria(char nome[]) {
    int inizio = 0;
    int fine = n - 1;

    while (inizio <= fine) {
        int centro = (inizio + fine) / 2;

        // confronto il nome cercato con quello al centro
        int confronto = strcmp(nome, agenda[centro].nome);

        if (confronto == 0) {
            return centro;
        }

        if (confronto < 0) {
            fine = centro - 1;
        }

        if (confronto > 0) {
            inizio = centro + 1;
        }
    }

    return -1;
}

void cerca() {
    char nome[50];

    cout << "Digita il nome da cercare: ";
    cin >> nome;

    int posizione = cercaBinaria(nome);

    if (posizione == -1) {
        cout << "Non trovato\n";
    } else {
        cout << "Trovato: "
             << agenda[posizione].nome << " - "
             << agenda[posizione].telefono << endl;
    }
}

void aggiungi() {
    if (n >= MAX) {
        cout << "La rubrica e' piena\n";
        return;
    }

    Contatto nuovo;

    cout << "Nome: ";
    cin >> nuovo.nome;

    cout << "Telefono: ";
    cin >> nuovo.telefono;

    int posizione = 0;

    /*  cerco dove inserire il nuovo contatto
    per lasciare la rubrica ordinata
    */

    while (posizione < n && strcmp(agenda[posizione].nome, nuovo.nome) < 0) {
        posizione++;
    }

    // sposto gli elementi verso destra
    for (int i = n; i > posizione; i--) {
        agenda[i] = agenda[i - 1];
    }

    agenda[posizione] = nuovo;
    n++;

    cout << "Contatto aggiunto\n";
}

void elimina() {
    char nome[50];

    cout << "Digita il nome da eliminare: ";
    cin >> nome;

    int posizione = cercaBinaria(nome);

    if (posizione == -1) {
        cout << "Non trovato\n";
        return;
    }

    // sposto gli elementi verso sinistra
    for (int i = posizione; i < n - 1; i++) {
        agenda[i] = agenda[i + 1];
    }

    n--;

    cout << "Eliminato\n";
}