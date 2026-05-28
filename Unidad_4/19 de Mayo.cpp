//Nombre del Alumno: Diego Emiliano Quiñones Barraza
//Numero de control: 25041722
#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int matriz[100][100];
	int i,j,n;
	srand(time(0));
	do{
		cout<<"Dime cuántos elementos por lado tiene la matriz? <2-100>";
		cin>>n;
	}while(n>100 or n<2);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			matriz[i][j]=rand()%100;
	cout<<"Impresion de la matriz\n";
	for(i=0;i<n;i++);{
		printf("%3d",matriz[i][j]);
	}
	cout<<"Impresion de la diagonal\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
			    printf("%3d",matriz[i][j]);
			else
			    printf("  ");
		}
		cout<<"\n";
	}
	for(i=0;i<n;i++){
		cout<<matriz[i][i]<<" ";
	}
		return 0;
}