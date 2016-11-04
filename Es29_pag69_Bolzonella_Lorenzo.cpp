#include <iostream>
// Bolzonella Lorenzo 3c
using namespace std;

int main ()
{
    int N;
    double N_maggiore;
    double N_minore;
    double somma;
    cout << " Quanti numeri vuole immettere?" << endl;
    cin >> N;

    for(int i = 0; i < n; i++)
    {
        system ("CLS");
        double X;
        cout << endl << "Immetta i vari numeri: " << endl;
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
    cout << " Il numero minore e': " << N_minore << endl;
    cout << " Il numero maggiore e': " << N_maggiore << endl;
    cout << " La media e': " << somma/N << endl;
}
