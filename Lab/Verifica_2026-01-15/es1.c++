#include <iostream>
using namespace std;

int main (){
    
    int voto;

    cout<<" Inserisci il voto (0-30)"<<endl;
    cin>>voto;

    if (voto>=28 && voto <=30){
        cout<<"Ottimo"<<endl;
    }
    else if (voto>=24 && voto <=27){
        cout<<"Buono"<<endl;
    }
    else if (voto>=18 && voto<=23){
        cout<<"Sufficente"<<endl;
    }
    else if (voto>=0 && voto<=17){
        cout<<"Insufficente"<<endl;
    }
    else {
        cout<<"Voto non valido"<<endl;
        return 1;
    }
    
}