#include <iostream>
using namespace std;

const int N = 4;

// funzione somma diagonale principale
int sommaDiagonale(int m[N][N]){
    int somma = 0;

    for(int i = 0; i < N; i++){
        somma += m[i][i];
    }

    return somma;
}

// funzione massimo della matrice
int massimo(int m[N][N]){
    int max = m[0][0];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(m[i][j] > max){
                max = m[i][j];
            }
        }
    }

    return max;
}

int main(){

    int m[N][N];

    // input matrice
    cout<<"Inserisci la matrice 4x4:\n";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> m[i][j];
        }
    }

    
    cout<<"Somma diagonale principale: "<< sommaDiagonale(m) << endl;
    cout<<"Valore massimo: "<< massimo(m) << endl;

    return 0;
}