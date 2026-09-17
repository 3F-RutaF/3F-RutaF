#include <iostream>
using namespace std;

// Risolvere l'equazione di primo grado ax + b = 0

int main() {
    float n1, n2, x;

    cout << "Inserisci i coefficienti dell'equazione (n1=a,n2=b): " << endl;
    cin >> n1,n2;

    if (n1 != 0) {
        x = -n2 / n1;
        cout << "La soluzione dell'equazione è: x = " << x << endl;
    } else {
        if (n2 == 0) {
            cout << "L'equazione ha infinite soluzioni." << endl;
        } else {
            cout << "L'equazione non ha soluzioni." << endl;
        }
    }

}