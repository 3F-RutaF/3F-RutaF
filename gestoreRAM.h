#ifndef GESTORERAM_H
#define GESTORERAM_H

#include "gestoreABC.h"
#include "gestore.h"

class GestoreRAMOrdinata : public GestoreContattiABC {

private:

    GestoreContatti g;

public:

    void inizializza() {
        g.inizializza();
    }

    void stampa() {
        g.stampa();
    }

    void aggiungi() {
        g.aggiungi();
    }

    void elimina() {
        g.elimina();
    }

    void cerca() {
        g.cerca();
    }
};

#endif