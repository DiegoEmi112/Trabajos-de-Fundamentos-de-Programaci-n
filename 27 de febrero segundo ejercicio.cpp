// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include <iostream>
#include<windows.h>//SetConsole
using namespace std;
int main(void)
{
SetConsoleOutputCP(CP_UTF8);//p/imprimir chrs especiales
SetConsoleCP(CP_UTF8);//Leer chrs especiales
int x;//declara variable entera
cout<< "Dame un numero: ";
cin>>x;
cout<<"Hola Mundo\n";
cout<<"La variable x vale "<<x;
return 0;
}
