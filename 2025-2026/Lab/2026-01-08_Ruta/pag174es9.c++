#include <iostream>
using namespace std;

int main() {
    
    int n, numero = 1;
    cout<<"Inserire un numero intero maggiore di 0: "<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Errore: il numero deve essere maggiore di 0."<<endl;
        return 1;
    }
    for(int i=0; i<=n; i++){
       numero = numero * 2;
       cout << "numero: " << numero << endl;


    }
    return 0;
}