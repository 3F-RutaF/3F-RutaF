#include <iostream>
using namespace std;

void soggiorno(int settimane,int lenzuola){
    const int quota_fissa=100;
    const int costo_settimana=600;
    const int costo_due_settimane=1100;
    int supplemento_lenzuola=20*settimane;
    int costo_totale=0;
    cout<<"Quante settimane vuoi soggiornare? ";
    cin>>settimane;
    cout<<"\nVuoi delle lenzuola extra (1=si,0=no)?";
    cin>>lenzuola;
    if(lenzuola==1){
        costo_totale=quota_fissa+costo_settimana+supplemento_lenzuola;
    }
    else{
        if(settimane==2){
            costo_totale=quota_fissa+costo_due_settimane;
        }
        else{
            costo_totale=quota_fissa+costo_settimana;
        }
    }
    cout<<"\nIl costo totale del soggiorno e' di: "<<costo_totale<<" euro."<<endl;
}

int main(){
    int settimane,lenzuola;
    soggiorno(settimane,lenzuola);
    return 0;
}

