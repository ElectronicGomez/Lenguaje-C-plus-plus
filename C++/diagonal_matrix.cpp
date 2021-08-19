#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int orden;
	cout<<"Ingrese el orden de la matriz diagonal: ";
	
	cin>>orden;
	int matriz[orden][orden];
	//Inicializamos la matriz:

	for(int i=0;i<orden;i++)
	{
		for(int j=0;j<orden;j++)
		{
			matriz[i][j]=0;
		}
	}
	printf("\n\n");
	//Se crea la matriz diagonal:
	int i,j;
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
	
	return 0;
}















