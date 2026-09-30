#ifndef GESTOREABC_H
#define GESTOREABC_H

class GestoreContattiABC {

public:

    virtual void inizializza() = 0;
    virtual void stampa() = 0;
    virtual void aggiungi() = 0;
    virtual void elimina() = 0;
    virtual void cerca() = 0;

    virtual ~GestoreContattiABC() {}

};

#endif