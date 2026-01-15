#include <iostream>
using namespace std;

const int biglietto_urbano = 2;
const int biglietto_extraurbano = 3;
const int biglietto_giornaliero = 5;

int manin(){

    int scelta;
    float importo=0.0;

    cout<<"Seleziona il tipo di biglietto che vuoi acquistare (1= Biglietto Urbano, 2= Biglietto Extraurbano, 3= Biglietto Giornaliero)"<<endl;
    cin>>scelta;

    switch(scelta){

        case 1: 
            cout<<"Hai selezionato il Biglietto Urbano. Il costo è di "<<biglietto_urbano<<" euro."<<endl;
            cout<<"Quanti soldi inserisci?"<<endl;
            cin>>importo;
            if (importo>=biglietto_urbano){
                cout<<"Biglietto acquistato con successo! Sto stampando il biglietto..."<<endl;
            }
            else {
                cout<<"Importo insufficiente per acquistare il biglietto."<<endl;
            }
            break;

        case 2:
                    cout<<"Hai selezionato il Biglietto Extraurbano. Il costo è di "<<biglietto_extraurbano<<" euro."<<endl;
            cout<<"Quanti soldi inserisci?"<<endl;
            cin>>importo;
            if (importo>=biglietto_extraurbano){
                cout<<"Biglietto acquistato con successo! Sto stampando il biglietto..."<<endl;
            }
            else {
                cout<<"Importo insufficiente per acquistare il biglietto."<<endl;
            }
            break;

        case 3:
            cout<<"Hai selezionato il Biglietto Giornaliero. Il costo è di "<<biglietto_giornaliero<<" euro."<<endl;
            cout<<"Quanti soldi inserisci?"<<endl;
            cin>>importo;
            if(importo>=biglietto_giornaliero){
                cout<<"Biglietto acquistato con successo! Sto stampando il biglietto..."<<endl;
            }
            else {
                cout<<"Importo insufficiente per acquistare il biglietto."<<endl;
            }
            break;
            
        default:
            cout<<"Scelta non valida. Riprova."<<endl;
            break;
    }

    return 0;
    }