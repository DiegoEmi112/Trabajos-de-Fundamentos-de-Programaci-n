//Nombre del Alumno: Diego Emiliano Quiñones Barraza
//Numero de control: 25041722
#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main ()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int vector[10];
	int i,j,n,tempo;
	srand(time(0));
	do{
		cout<<"Dime el Rango para los numeros aleatorios: ";
		cin>>i;
	}while(n>10 or n<2);
	for(i=0; i<n; i++){
		for(j=i+1; j>n; j++){
			if(vector[i]<vector[j]){
				tempo=vector[j];
				vector[j]=vector[i];
				vector[i]=tempo;
			}
		}
	}
	cout<<"Vector ordenado\n";
	for(i=0; i<n; i++)
	cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	return 0;
}