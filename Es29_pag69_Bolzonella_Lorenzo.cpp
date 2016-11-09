#include <iostream>
// Bolzonella Lorenzo 3c
using namespace std;

int main ()
{
    int N;
    double N_maggiore;
    double N_minore;
    double somma;
    cout << endl << "                           Esercizio 29 pagina 69                              " << endl;
    cout << endl << "-------------------------------------------------------------------------------" << endl;
    cout << endl << " Quanti numeri vuole immettere?  " << endl;
    cin >> N;

    for(int i = 0; i < N; i++)
    {

        double X;
        cout << endl << "Immetta il numero scelto: " << endl;
        cin >> X;
        if (i == 0)
            {
            N_minore = X;
            N_maggiore = X;
            }
        else
        {
            if ( X < N_minore)
            {
                N_minore = X;
            }
        else if ( X > N_maggiore)
            {
                N_maggiore = X;
            }
        }
        somma = somma + X;
    }
    cout << " Il numero minore tra quelli scelti e': " << N_minore << endl;
    cout << " Il numero maggiore tra quelli scelti e': " << N_maggiore << endl;
    cout << " La media tra i numeri scelti e': " << somma/N << endl;
}
