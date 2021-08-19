#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX 200 
using namespace std;

void inicializar_matriz(int matriz[][MAX],int orden){
	int i, j;
	for(i=0;i<orden;i++)
	{
		for(j=0;j<orden;j++)
		{
			matriz[i][j]=0;
		}
	}
	printf("\n\n");
	
}

void crear_matriz_diagonal(int matriz[][MAX],int orden){
	int i, j;
	cout << "\nIngrese los elementos de la matriz diagonal:\n\n";
	for(i=0;i<orden;i++)
	{
		for(j=0;j<orden;j++)
		{
			if(i==j)
			{
				printf("fila[%d], fila[%d]: ",i,j);
				cin >> matriz[i][j];
			}
		}
	}
	printf("\n");
	
	for(i=0;i<orden;i++)
	{
		printf("\n");
		for(j=0;j<orden;j++)
		{
			printf(" %d", matriz[i][j]);
		}
	}
	printf("\n\n");
	
}



int main()
{
	int n;
	cout<<"Ingrese el orden de la matriz diagonal: ";
	
	cin>>n;
	int matriz[MAX][MAX];
	inicializar_matriz(matriz,n);
	crear_matriz_diagonal(matriz,n);
	
	return 0;
}















