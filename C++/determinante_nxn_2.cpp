#include <iostream>
#include<windows.h>
using namespace std;



int main(){
	short int n,i,j,k;
	cout<<"Introduzca el orden de la matriz: ";
	cin>>n;
	
	float A[n][n];
	float aux, p, p1,det=1;
	
	cout<<"Introduzca los elementos de la matriz: "<<endl;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			printf("fila[%d], fila[%d]: ",i,j);
			cin>>A[i][j];
		}
		cout << "\n";
	}
	//Reduccion por renglones
	for(i=0;i<n;i++){
		p = A[i][i];
		for(j=i+1;j<n;j++){
			p1 = A[j][i];
			aux = p1/p;
			for(k=0;k<n;k++){
				A[j][k]=A[j][k]-aux*A[i][k];
			}
		}
	}
	cout<<endl;
	cout<<"Matriz reducida:"<<endl;
	//Mostrar matriz reducida
	for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         cout << "\t" << A[i][j];
      }
      cout << "\n";
   }
	
	//Calculo de la determinante
	for(i=0;i<n;i++){
		det*= A[i][i];
	}
	cout<<"La determinante de A es: "<<det<<endl;
	return 0;
	
}








