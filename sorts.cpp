#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

void inserimento(int n, int V[MAXSIZE]);
void bubble(int n, int V[MAXSIZE]);
void stampa(int n, int V[MAXSIZE]);

void insertion(int n,int V[MAXSIZE]);

void selection(int n, int V[MAXSIZE]);
void stampa_s(int n, int V[MAXSIZE]);
int main()
{
	int n, i, j,V[MAXSIZE];
	printf("Pls enter the size of array\n");
	scanf("%d",&n);
	
	//bubble sort
	printf("\n\n********BUBBLE SORT********\n\n");
	inserimento(n,V);
	bubble(n,V);
	printf("The array sorting with bubble sort is: \n");
	stampa(n,V);
	
	
	printf("\n\n*******INSERTION SORT******\n\n");
	
	//insertion sort
	inserimento(n,V);
	insertion(n,V);
	printf("The array sorted with insertion sort is:\n");
	stampa(n,V);
	
	
	printf("\n\n*********SELECTION SORT***********\n\n");
	//selection sort
	inserimento(n,V);
	selection(n,V);
	printf("The array sorted with selecion sort is: \n");
	stampa_s(n,V);
}
void inserimento(int n, int V[MAXSIZE])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("\npls enter %d number into array\n",i);
		scanf("%d", &V[i]);
	}
	
}

void bubble(int n, int V[MAXSIZE])
{
	int i, j,temp;
	
	for (i=0; i<n; i++)
	{
		for (j=0;j<(n-i-1);j++)
		{
			if (V[j]>V[j+1])
			{
				temp=V[j];
				V[j]=V[j+1];
				V[j+1]=temp;
			}
		}
	}
}

void stampa(int n, int V[MAXSIZE])
{
	int i;
	
	for (i=0;i<n;i++)
	{
		printf("%d\t",V[i]);
	}
}

void insertion(int n, int V[MAXSIZE])
{
	int i,j,temp;
	
	for (i=0;i<n;i++)
	{
		temp = V[i];
		j = i - 1;
		while(temp < V[j] && j>=0)
		{
			V[j+1]=V[j];
			j = j - 1;
		}
		V[j + 1] = temp;
	}
}

void selection(int n, int V[MAXSIZE])
{
	int i, j, min ,temp;
	for (i=0;i<=n-1;i++)
	{
		min = i;
		for (j=i+1;j<=n;j++)
		{
			if (V[j]<V[min])
			{
				min = j;
			}
			//scambio
			temp = V[i];
			V[i]=V[min];
			V[min]=temp;
		}
	}
}
void stampa_s(int n, int V[MAXSIZE])
{
	int i;
	for (i=1;i<=n;i++)
	{
		printf("%d\t",V[i]);
	}
}
