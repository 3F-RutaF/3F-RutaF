#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void print_separator(const std::string& title) {
    std::cout << "\n===== " << title << " =====\n";
}

// Passaggio per VALORE: la funzione riceve una COPIA
void byValue(int x) {
    x += 10; // modifica solo la copia locale
    cout <<  "in byValue, x = " << x << " indirizzo di x = " << &x << endl;
}

// Passaggio per RIFERIMENTO: la funzione riceve un alias della variabile chiamante
void byReference(int& x) {
    x += 10; // modifica solo la copia locale
    cout <<  "in byReference, x = " << x << " indirizzo di x = " << &x << endl;
}

void byPointer(int* p) {
    *p+= 10; // modifica solo la copia locale
    cout <<  "in byPointer, *p = " << *p << " p,  = " << p << endl;    
}


void passaVettore(int v[]) {
    cout << "in passaVettore(), dimensione del vettore passato: " << sizeof(v) << endl;
}


struct Punto {
    float x;
    float y;
}; 

void passaStruct(Punto s) {
    s.x = 99;
    s.y = 101;
    cout << "in passaStruct(),  s.x = " << s.x << " s.y = " << s.y << endl;
}

void modificaVettore(int v[]) {
    v[3] = 99;
}


int main() {
    // 1) Passaggio per VALORE
    print_separator("Passaggio per VALORE");
    int a = 42;

    cout << "a = " << a << " indirizzo di a " << &a << " ora passo a come parametro a una funzione\n"; 
    byValue(a);
    cout << "dopo l'uscita dalla funzione a = " << a << endl;


    cout << "\na = " << a << " indirizzo di a " << &a << " ora passo a come parametro a una funzione\n"; 
    byReference(a);
    cout << "dopo l'uscita dalla funzione a = " << a << endl;

    int * ptr = &a;
    cout << "\nptr, puntatore ad a = " << ptr << " *ptr = " << *ptr << " ora passo ptr come parametro a una funzione\n"; 
    byPointer(&a);
    cout << "dopo l'uscita dalla funzione a = " << a << endl;


    int vettore[] = {0, 1, 2, 3, 4 };
    cout << "dimensione di vettore in main = " << sizeof(vettore) << endl;
    passaVettore(vettore);


    Punto p = { 1,2 };
    cout << "struct p, p.x = " << p.x << " p.y = " << p.y << endl;
    passaStruct(p);
    cout << "struct p, p.x = " << p.x << " p.y = " << p.y << endl;


    modificaVettore(vettore);
    for (int i = 0; i < sizeof(vettore)/sizeof(vettore[0]);i++)
        cout << vettore[i] << ", "; 

    return 0;
}