#ifndef CONTATTI_H
#define CONTATTI_H

#include <iostream>
#include <cstring>

using namespace std;

class Contatto {

private:
    char nome[50];
    char telefono[20];

public:

    void setNome(const char n[]) {
        strcpy(nome, n);
    }

    void setTelefono(const char t[]) {
        strcpy(telefono, t);
    }

    char* getNome() {
        return nome;
    }

    char* getTelefono() {
        return telefono;
    }

    void stampa() {
        cout << nome << " - " << telefono << endl;
    }
};

#endif