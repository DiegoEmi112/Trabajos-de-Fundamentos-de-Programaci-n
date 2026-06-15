//Nombre del Alumno: Diego Emiliano Quiñones Barraza
//Numero de Control: 25041722
#include<iostream>
using namespace std;
void cuad1(int x);
void cuad2(int &x);
int main(void)
{
	int x;
	cout<<"Dame un valor para elevar al cuadrado ";
	cin>>x;
	cout<<"x="<<x<<"antes de enviarla a la funcion 1";
	system("PAUSE");
	cuad1(x);
	cout<<"\nx="<<x<<" Despues de enviarla a la funcion 2";
	cuad2(x);
	cout<<"\nx="<<x<<"Despues de enciarla a la funcion 2";
	return 0;
}
void cuand1(int )
