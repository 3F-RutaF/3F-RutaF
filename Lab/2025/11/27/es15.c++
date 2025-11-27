#include <iostream>
using namespace std;
const float tariffa=0.02;
int main(){
    float costo;
    float peso;
    float totale;
    float peso_eccesso;
    cout<<"Costo biglietto: ";
    cin>>costo;
    cout<<"\nPeso bagaglio in Kg: ";
    cin>>peso;
    if(peso>20){
        peso_eccesso=peso-20;
        totale=costo+(peso_eccesso*tariffa);
        cout<<"\nCosto totale con sovrapprezzo: "<<totale;}
    else{ 
        cout<<"\nCosto totale: "<<costo;
    }
}