#include <iostream>
using namespace std;

// Capire secondo l'età inserita dall'utente quali veicoli può guidare:

int main(){
    int età;

    cout<<"Inserisci la tua età: ";
    cin>>età;

    // Controlli per età
    
    if (età>=14){
        cout<<"Puoi guidare lo scooter con cilindrata fino a 50cc."<<endl;
    }
    else if (età>=16){
        cout<<"Puoi guidare la moto fino a 125cc."<<endl;

    }
    else if(età>=18){
        cout<<"Puoi guidare l'auto fino a 95 cavalli."<<endl;
    }
    else{
        cout<<"Puoi guidare qualsiasi veicolo."<<endl;
    }
}