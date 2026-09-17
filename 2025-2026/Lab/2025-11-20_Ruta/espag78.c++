#include <iostream>
using namespace std;

const float costoBN = 0.10;
const float costoC = 0.80;
const float costoR = 1.30;

 void calcola_spesa()
{

    int fotoBN , fotoC , FotoTot;
    float SpesaBN , SpesaC , SpesaTot;
    cout<<"Inserisci il numero di foto in bianco e nero: ";
    cin>>fotoBN;
    cout<<"Inserisci il numero di foto a colori: ";
    cin>>fotoC;
    FotoTot = fotoBN + fotoC;
    SpesaBN = fotoBN * costoBN;
    SpesaC = fotoC * costoC;
    SpesaTot = SpesaBN + SpesaC + costoR;
    
    cout<<"Numero fotocopie acquisite: "<<FotoTot<<endl;
    cout<<"Costo fotocopie in bianco e nero: "<<SpesaBN<<" euro"<<endl;
    cout<<"Costo fotocopie a colori: "<<SpesaC<<" euro"<<endl;
    cout<<"Costo del fascicolo rilegato: "<<SpesaTot<<" euro"<<endl;
}

int main()
{
    calcola_spesa();
    system("pause");
    return 0;
}