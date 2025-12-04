#include <iostream>
using namespace std;

int main(){
    int età1,età2,età3;
    cout<<"Inserisci l'età dei 3 fratelli: "<<endl;
    cin>>età1>>età2>>età3;
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