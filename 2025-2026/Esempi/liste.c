// g++ -std=c++17 -O2 -Wall -Wextra -pedantic <file>.cpp -o <file>.exe

#include <iostream>

struct Nodo {
    int numero;
    Nodo* next;
    explicit Nodo(int n) : numero(n), next(nullptr) {}
};

struct Lista {
    Nodo* head = nullptr;

    ~Lista() {
        Nodo* cur = head;
        while (cur) {
            Nodo* tmp = cur->next;
            delete cur;
            cur = tmp;
        }
    }

    void aggiungi_in_testa(int n) {
        Nodo* node = new Nodo{n};
        node->next = head;
        head = node;
    }

    void stampa() const {
        const Nodo* cur = head;
        int pos = 1;
        std::cout << "Stato corrente della lista (" << (head ? "" : "vuota") << "):\n";
        while (cur) {
            std::cout << "  [" << pos << "] numero=" << cur->numero << "\n";
            cur = cur->next;
            ++pos;
        }
        if (!head) std::cout << "  (nessun elemento)\n";
        std::cout << "----\n";
    }
};

int main() {
    
    Lista L;
    int inputs_v[] = {10, 20, 30, 40};

    std::cout << "Inserimento in TESTA; stampa dopo ogni inserimento.\n\n";
    for (int i = 0; i < sizeof(inputs_v)/sizeof(inputs_v[0]);i++) {
        std::cout << "Inserisco: " << inputs_v[i] << "\n";
        L.aggiungi_in_testa(inputs_v[i]);
        L.stampa();
    }
    return 0;
}