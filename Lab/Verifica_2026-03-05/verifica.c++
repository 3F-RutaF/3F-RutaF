#include <iostream>
using namespace std;

int somma_positivi(int a[], int n) {
    int somma = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            somma += a[i];
        }
    }
    return somma;
}

 void stampa_elementi_pari(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout <<a[i] << " ";
        }
    }
    cout << endl;
}

  void ricerca_sequenziale(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout <<"Elemento trovato all'indice: " << i << endl;
            return;
        }
    }
    cout <<"Elemento non trovato (-1)." << endl;  
}

int numeri_maggiori(int v[],int n, int t){
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > t) {
            count++;
        }
    }
    return count;
}

void elementi_non_vallati(int v[],int n){
    for (int i=0; i<n;i++){
        if(v[i] < v[i+1]){
            cout<<v[i]<<" ";
       }
    }
}

int main() {
    int n,x,t;
    cout<<"Inserisci la dimensione del vettore: \n"; 
    cin>>n;
    int a[n];
    cout<<"Inserisci gli elementi del vettore (uno per volta): \n";
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    cout<<"La somma dei numeri postitivi è: "<<somma_positivi(a, n)<<endl;
    cout<<"I numeri pari del vettore sono: ";
    stampa_elementi_pari(a, n);
    cout<<"Inserisci l'elemento da cercare: \n";
    cin>>x;
    ricerca_sequenziale(a, n, x);
    cout<<"Inserisci il numero di riferimento: \n";
    cin>>t;
    cout<<"Il numero di elementi maggiori di "<<t<<" è: "<<numeri_maggiori(a, n, t)<<endl;
    cout<<"Gli elementi non vallati sono: ";
    elementi_non_vallati(a, n);
    
    return 0;

}