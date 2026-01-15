#include <iostream>
using namespace std;

int main(){
    
    int  num,somma=0;
    cout<<"Scrivi tutti i numeri di cui vuoi fare la somma, termina con -1"<<endl;
    do {
        cin>>num;
        if (num!=-1){
            somma+=num;
        }
    } while (num!=-1);

    cout<<"La somma dei numeri inseriti è: "<<somma<<endl;

    return 0;
}