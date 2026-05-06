// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,resultado;
	cout<<"Escribe un numero: ";
	cin>>n1;
	cout<<"Escribe un segundo numero: ";
	cin>>n2;
	resultado=n1/n2;
	if(n2==0)
	{
		cout<<"No se puede";
	}
	else
	{
		cout<<""<<resultado<<"";
	}
	return 0;
}
