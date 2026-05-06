// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include<lostream>
#include<Windows.h>
using namespace std;
int main( )
{
	SetConsoleOutputCp(CP_UTF8);
	SetconsoleCP(CP_UTF8);
	int numero;
	cout<<"Dame un numero: ";
	cin>>numero;
	if(numero>0)
	cout<<"El numero es positivo";
	else if(numero<0)
	cout<<"El numero es negativo";
	else
	cout<<"El numero es cero";
	return 0;
}
