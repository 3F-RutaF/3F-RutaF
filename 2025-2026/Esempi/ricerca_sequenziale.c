#include <iostream>
#include <vector>

struct Nodo {
    int numero;
    Nodo* next;
    explicit Nodo(int n) : numero(n), next(nullptr) {}
};

struct Lista {
    Nodo* head = nullptr;
    Nodo* tail = nullptr;

    ~Lista() {
        Nodo* cur = head;
        while (cur) {
            Nodo* tmp = cur->next;
            delete cur;
            cur = tmp;
        }
    }

    void push_back(int n) {
        Nodo* node = new Nodo{n};
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    void stampa() const {
        const Nodo* cur = head;
        int pos = 1;
        std::cout << "Lista (" << (head ? "" : "vuota") << "):\n";
        while (cur) {
            std::cout << "  [" << pos << "] numero=" << cur->numero << "\n";
            cur = cur->next;
            ++pos;
        }
        if (!head) std::cout << "  (nessun elemento)\n";
        std::cout << "----\n";
    }

    // Ricerca lineare per valore 'numero'; imposta pos_out (1-based) se trovato.
    const Nodo* find_by_numero(int valore, int & pos_out) const {
        const Nodo* cur = head;
        int pos = 1;
        while (cur) {
            if (cur->numero == valore) {
                pos_out = pos;
                return cur;
            }
            cur = cur->next;
            ++pos;
        }
        return nullptr;
    }
};

// Utility: stampa esito della ricerca
void stampa_esito_ricerca(const Lista& L, int valore) {
    int pos = -1;
    const Nodo* found = L.find_by_numero(valore, pos);
    if (found) {
        std::cout << "Elemento TROVATO in posizione " << pos
                  << ": numero=" << found->numero << "\n";
    } else {
        std::cout << "Elemento NON trovato: numero=" << valore << "\n";
    }
    std::cout << "----\n";
}

int main() {
    Lista L;

    // Inserimento in CODA (senza stampa automatica)
    int inputs_v[] = {10, 20, 30, 40};
    for (int i = 0; i < sizeof(inputs_v)/sizeof(inputs_v[0]);i++) {
        std::cout << "Inserire: " << inputs_v[i] << "\n";
        L.push_back(inputs_v[i]);
        L.stampa();
    }
    std::cout << "----\n";

    // Stampa su richiesta
    std::cout << "Richiesta di stampa completa della lista:\n";
    L.stampa();

    // Esempi di ricerca
    std::cout << "Ricerche di esempio:\n";
    stampa_esito_ricerca(L, 20);  // presente
    stampa_esito_ricerca(L, 30); // assente
    stampa_esito_ricerca(L, 50);  // assente
    stampa_esito_ricerca(L, 40); // assente

    return 0;
}