#include <iostream>
#define N 100
using namespace std;

void selection_sort(int v[], int dim);
void bubble_sort(int v[], int dim);
void stampa(int v[], int dim);
void scambio(int v[], int dim, int pos1, int pos2);

int main(){
    int a[] = {-3,-1,0,7,4,5,7,8,10,1,9};
    int dim = 11;
    selection_sort(a, dim);
    stampa(a, dim);
    cout << endl;
    int b[] = {-3,-1,0,7,4,5,7,8,10,1,9};
    bubble_sort(b, dim);
    stampa(b, dim);
    cout << endl;
    return 0;
}

void bubble_sort(int v[], int dim){
    int i,k,sup,comodo;
    bool continua = true;
    k = dim;
    while(continua){
        sup = k;
        continua = false;
        for(i = 0; i < sup; i++){
                cout <<"i =" << i << ";";
                cout << "sup =" << sup << ";";
                cout << "k =" << k << ";";
                cout << "Ecco l'array: " << endl;
                stampa(v, dim);
                cout << endl;
                cout << endl;
                /*
                Questo array funziona poichè esiste il valore sup-1, che rispetto al
                valore sup, non fa rieseguire il ciclo il numero stesso di valori.
                */

                if (v[i]>v[i+1]){
                // scambio tra v[i] e v[i+1]
                scambio(v, dim, i, i+1);
                continua = true;
                k = i;
            }
        }//fine ciclo for
    }//fine ciclo while
}//fine funzione

void selection_sort(int v[], int dim){
    int comodo;
    for (int i = 0; i < dim-1; i++){
        for (int j = i+1; j < dim; j++){
            if (v[i] > v[j]){
                // scambio v[i] e v[j]
                scambio(v, dim, i, j);
            }
        }
    }//fine ciclo for
}    //fine funzione

void stampa(int v[], int dim){
    for(int i = 0; i < dim; i++){
        cout << v[i] << " ";
    }
}

void scambio(int v[], int dim, int pos1, int pos2){
    int comodo;
    if (pos1 < dim && pos2 < dim ){
        comodo = v[pos1];
        v[pos1] = v[pos2];
        v[pos2] = comodo;
    }
}



