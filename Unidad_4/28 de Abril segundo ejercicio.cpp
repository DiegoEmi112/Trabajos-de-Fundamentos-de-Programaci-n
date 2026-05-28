//Nombre del alumno: Diego Emiliano Quiñones Barraza
//no. de control: 25041722
#include<windows.h>
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8)
	SetConsoleOutPutCP(CP_UTF8)
	int precio,x,ls,li;
	do{
		cout<<"Dame el limite inferior: ";
		cin>>li;
		cout<<"Dame el limite superior: ";
		cin>>ls;
		
	}while(li>=ls);
	do{
	
	cout<<"Dime el precio (entre "<<li<<" y "<<ls<<")";
	cin>>precio;
}while(precio<li or precio>ls);
do{
	cout<<"Atinale al precio: ";
	
}
}