// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int D,M,A;
	string mes;
	cout<<"Dame una fecha en un formato: DDMMAA";
	scanf("%2d%2d%4d",&D,&M,&A);
if (M==1)
	mes="Enero";
else if(M==4)
	mes="Abril";
else if(M==5)
	mes="Mayo";
else if(M==6)
	mes="Junio";
else if(M==7)
	mes="Julio";
else if(M==8)
	mes="Agosto";
else if(M==9)
	mes="Septiembre";
else if(M==10)
	mes="Octumbre";
else if(M==11)
	mes="Noviembre";
else if(M==12)
	mes="Diciembre";
else mes="Mes Invalido";
cout<<"La fecha es: "<<D<<"-"<<A;
return 0;
}
