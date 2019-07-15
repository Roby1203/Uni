#include <stdio.h>

int main()
{
	int i, N , primo, secondo,terzo;
	printf("\n\n INSERISCI QUANTI NUMERI VUOI VISUALIZZARE\n\n");
	scanf("%d",&N);
	printf("\n\n");
	
	primo = 1;
	secondo = 1;
	
	printf("%d\n", primo);
	printf("%d\n", secondo);
	
	for (i=2;i<N;i++)
	{
		terzo = primo + secondo;
		primo = secondo;
		secondo = terzo;
		printf("%d\n", terzo);
	}
	
}

