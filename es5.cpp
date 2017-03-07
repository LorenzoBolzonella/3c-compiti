

 // BOLZONELLA LORENZO 	3C 
using namespace std;

void INSERIMENTO(int [], int);
void DIMENSIONE (int&);
float RADICE (int [], int );

int main ()
{
	int VETTORI[10];
	int DIM;
	DIMENSIONE(DIM);
	INSERIMENTO(VETTORI,DIM);
	cout << endl << "Il valore della radice quadrata di soli numeri dispari e': " << endl;
	cout << endl << RADICE(VETTORI,DIM);
}

void INSERIMENTO (int K[], int DIM)
{
	for (int i=0;i<DIM; i++)
	{
		cout << endl << "Inserisca il suo " << i+1 << "elemento: " << endl;
		cin >> K[i];
	}
}

void DIMENSIONE (int&DIM)
{
	do 
	{
		cout << endl << " Inserisca il nuemro di elementi: " << endl;
		cin >> DIM;
		
	} while (DIM>10 || DIM<0);
}

float RADICE ( int K[], int DIM)
{
	int SOMMA;
	float S;
	for (int i=0; i<DIM; i++)
	{
		if (K[i]%2==0)
		{
			cout << "" << endl;
		}
		else 
		{
			SOMMA=SOMMA+(K[i],*K[i]);
		}		
	}
	S=sqrt(SOMMA);
	return S;
}
