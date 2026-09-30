#ifndef GESTORE_H
#define GESTORE_H

#include "contatti.h"

const int MAX = 100;

class GestoreContatti {

private:

    Contatto agenda[MAX];
    int n;

public:

    GestoreContatti();

    void inizializza();

    void stampa();

    int cercaBinaria(char nome[]);

    void cerca();

    void aggiungi();

    void elimina();
};

#endif