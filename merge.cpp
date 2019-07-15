#include <stdio.h>
#define N 10


int main()
{
	int i,j,V1[N],V2[N],VM[2*N],k,n1,n2;
	printf("\n\n inserisci il numero di elementi del primo vettore \n\n");
	scanf("%d", &n1);
	printf("\n\n inserisci il numero di elementi del secondo vettore \n\n");
	scanf("%d", &n2);
	
	for (i=0;i<n1;i++)
	{
		printf("\n\n ARRAY 1 : numero %d : ",i+1);
		scanf("%d", &V1[i]);
	}
	printf("\n\n ARRAY 1 :  ");
	for (i=0;i<n1;i++)
	{
		printf("%d", V1[i]);
	}
	for (j=0;j<n2;j++)
	{
		printf("\n\n ARRAY 2 : numero %d : ", j+1);
		scanf("%d",&V2[j]);
	}
	printf("\n\n ARRAY 2 : ");
	for (j=0;j<n2;j++)
	{
		printf("%d", V2[j]);
	}
	
	// MERGE
	
	i=0;
	j=0;
	
	for (k=0;k<n1+n2;k++)
	{
		if (i<n1 && V1[i] < V2[j]||j>=n2)
		{
			VM[k]=V1[i];
			i++;
		}
		else 
		{
			VM[k]=V2[j];
			j++;
		}
	}
	printf("\n\n IL MERGE E' ");
	
	for (k=0;k<n1+n2;k++)
	{
		printf("%d", VM[k]);
	}
}
