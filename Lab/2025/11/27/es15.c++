#include <iostream>
using namespace std;
int main(){
    float costo;
    float peso;
    float totale;
    cout<<"Costo biglietto: ";
    cin>>costo;
    cout<<"\nPeso bagaglio in Kg: ";
    cin>>peso;
    if(peso>20){
        totale=costo+(costo*0.02);
        cout<<"\nCosto totale con sovrapprezzo: "<<totale;}
    else{ 
        cout<<"\nCosto totale: "<<costo;
    }
}