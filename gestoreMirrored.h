#ifndef GESTOREMIRRORED_H
#define GESTOREMIRRORED_H

#include <fstream>

#include "gestoreABC.h"
#include "gestore.h"

class GestoreMirroredRAM : public GestoreContattiABC {

private:

    GestoreContatti g;

public:

    void inizializza() {

        ifstream file("contatti.txt");

        if(!file) {
            g.inizializza();
            salva();
            return;
        }

        file.close();
    }

    void salva() {

        ofstream file("contatti.txt");

        file.close();
    }

    void stampa() {
        g.stampa();
    }

    void aggiungi() {
        g.aggiungi();
        salva();
    }

    void elimina() {
        g.elimina();
        salva();
    }

    void cerca() {
        g.cerca();
    }
};

#endif