#include <stlib.h>
#include <stdio.h>

// BOLZONELLA LORENZO 	3C 
using namespace std;

main ()
{
	int arrayNumeri[MAX],dato, max;
	unsigned int i,num = 0, posizMax;
	arrayNumeri[0] =0; 	// se non immetto niente... 
	printf("\nInserire i valori ( 0 per terminare): \n")
	scanf ("%d", &dato);
	while (dato!=0 && num < MAX)
	{
		arrayNumeri[num] = dato;
		________________________
		if (num < MAX) // non leggo il dato seguente 
		{// se l'array è finito 
			scanf ("%d, &dato";)
		}
	}
	max = arrayNumeri[0];
	posizMax =0;
	for (i=1;___________; i++)
	{
		if (___________)
		{
			max = arrayNumeri[i];
			posizMax = ____________________
		}
	}
	printf ("Max:%d, posizione:%u/n", max, posizMax);
	system("PAUSE");
}
