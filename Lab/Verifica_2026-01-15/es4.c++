#include <iostream>
using namespace std;

int main(){
      
    int giorno;
    float pioggia;

    cout<<"Inserisci per quanti giorni vuoi analizzare le precipitazioni:"<<endl;
    cin>>giorno;
    cout<<"Inserisci la quantità di pioggia (in mm) per ogni giorno:"<<endl;
    for(int i=1;i<=giorno;i++){
        cin>>pioggia;
        if (pioggia<0){
            cout<<"Valore non valido, termina il programma."<<endl;
            break;
        }
        else if (pioggia==0){
            cout<<"Il giorno "<<i<<" non c'è stata pioggia."<<endl;
        }
        else if (pioggia>50){
            cout<<"Nel giorno "<<i<<" pioggia intensa."<<endl;
        }
        else {
            cout<<"Nel giorno "<<i<<" pioggia normale."<<endl;
        }
    }

}