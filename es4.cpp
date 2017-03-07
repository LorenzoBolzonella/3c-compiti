#include <iostream>
// BOLZONELLA LORENZO 	3C 
using namespace std;

void INSERIMENTO (int [], int);
void DIMENSIONE (int&);
int SOMMA (int[], int );
int PRODOTTO (int[], int );

int main ()
{
	int VETTORI[10], L,D,J;
	DIMENSIONE (L);
	INSERIMENTO (VETTORI,L);
	cout << endl << "Il prodotto tra i numeri pari e': " << PRODOTTO (VETTORI,L) << endl;
	cout << endl << "La somma tra i numeri dispari e': " << SOMMA (VETTORI,L) << endl;
}

void INSERIMENTO (int K[], int L)
{
	for (int i=o;i<L;i++)
	{
		cout << endl << "Inserisca il " << i+1 << "valore: " << endl;
		cin v[i];
	}
}

void DIMENSIONE (int&L)
{
	do 
	{
		cout << endl << "Inserisca la quantita' di numeri das analizzare: " << endl;
		cin >> L;
	}
	while (L>10);		
}

int SOMMA (int K[], int L)
{
	int J=0;
	for (i=1;i<L;i++)
	{
		J=J+K[i];
		i++;
	}
	return J;
}

int PRODOTTO (int K[], int L)
{
	int D=1;
	for (int i=1;i<L;i++)
	{
		D=D*K[i];
		i++;
	}
	return D;
}

