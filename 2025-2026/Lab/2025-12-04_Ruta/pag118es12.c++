#include <iostream>
using namespace std;

//Scrivere un programma che legga l’età di tre fratelli e calcoli e stampi la differenza di età tra il fratello maggiore e quello minore.

int main(){
    int età1,età2,età3;
    cout<<"Inserisci l'età dei 3 fratelli: "<<endl;
    cin>>età1>>età2>>età3;

    //Calcolo e stampa della differenza di età tra il fratello maggiore e quello minore
    
    if(età1>età2 && età1>età3 && età2>età3){
        cout<<"La differenza tra il freatello maggiore e quello minore è di: "<<età1-età3<<"anni"<<endl;
    }
    else if(età2>età1 && età2>età3 && età1>età3){
        cout<<"La differenza tra il freatello maggiore e quello minore è di: "<<età2-età3<<"anni"<<endl;
    }
    else if(età3>età1 && età3>età2 && età1>età2){
        cout<<"La differenza tra il freatello maggiore e quello minore è di: "<<età3-età2<<"anni"<<endl;
    }
    else if(età1>età2 && età1>età3 && età3>età2){
        cout<<"La differenza tra il freatello maggiore e quello minore è di: "<<età1-età2<<"anni"<<endl;
    }
    else if(età2>età1 && età2>età3 && età3>età1){
        cout<<"La differenza tra il freatello maggiore e quello minore è di: "<<età2-età1<<"anni"<<endl;
    }
    else if(età3>età1 && età3>età2 && età2>età1){
        cout<<"La differenza tra il freatello maggiore e quello minore è di: "<<età3-età1<<"anni"<< endl;
    }
}   