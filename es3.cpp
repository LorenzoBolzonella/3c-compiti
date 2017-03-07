#include <iostream>
// BOLZONELLA LORENZO 	3C   
using namespace std,


void INSERIMENTO(int [], int);
void DIMENSIONE (int&);
void INVERSO (int [], int);

int main()
{
	int VETTORI[10];
	int DIM;
	DIMENSIONE(DIM);
	INSERIMENTO(VETTORI,DIM);
	INVERSO(VETTORI,DIM);
}

void INSERIMENTO (int K[], int DIM)
{
	for (int i=0;i<DIM; i++)
	{
		cout << endl << "Inserisca il " << i << "numero: " << endl;
		cin K[i];		
	} 

}

void DIMENSIONE (int&DIM)
{
	do 
	{
		cout << endl << "Inserisca il numero da elemnti da lei desiderato: " << endl;
		cin >> DIM;
	}
	while (DIM>10 || DIM <0);
}

void INVERSO (int K[], int DIM)
{
	for (int i=DIM-1; i>=0; i--)
	{
		cout << v[i] << endl;
	}
}
