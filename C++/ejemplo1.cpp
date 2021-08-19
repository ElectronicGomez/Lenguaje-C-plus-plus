#include <iostream>
#include <math.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int a;
	cout<<"Ingrese la cantidad : "; 
	cin>>a;
	for(;a<=0;){
		cout<<"error, vuelva ingresar:";
		cin>>a;
	}
	
	
	return 0;

}
