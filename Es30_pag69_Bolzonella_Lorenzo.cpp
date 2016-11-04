#include <iostream>
// Bolzonella Lorenzo 3c
using namespace std;

int main()
{
    int unità;
    int decine;
    int centinaia;
    int numero;

    numero ( centinaia + decine + unità ); // insieme delle cifre
    numero = numero % 1000; // il resto è il 'modulo mille'
    cout << endl << " Inserisca il numero: " << endl; // cifra vista dall'utente
    cin >> endl >> numero;

    int centinaia = numero / 100; // centinaia
    numero = numero % 100; // il resto è il 'modulo cento'
    cout << endl << " Il numero in centinaia: " << endl; // cifra vista dall'utente

    int decine = numero / 10; // decine
    numero = numero % 10; // il resto è il 'modulo dieci '
    cout << endl << " Il numero in decine: " << endl; // cifra vista dall'utente

    int unità = numero / 1;
    numero = numero % 1;
    cout << endl << " Il numero in unità: " << endl; // cifra vista dall'utente

}
