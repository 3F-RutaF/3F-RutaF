#ifndef CONTATTI_H
#define CONTATTI_H

const int MAX = 100;

struct Contatto {
    char nome[50];
    char telefono[20];
};

extern Contatto agenda[MAX]; // extern: variabile definita in un altro file (funzioni.cpp)
extern int n;

void inizializza();
void stampa();
int cercaBinaria(char nome[]);
void cerca();
void aggiungi();
void elimina();

#endif