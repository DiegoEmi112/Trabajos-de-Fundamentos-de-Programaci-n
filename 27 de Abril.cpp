// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int num, factorial;
	cout<<"Dime un numero para calcular su factorial: ";
	cin>>factorial;
	cout<<factorial;
	for(num=factorial-1;num>=1;num--){//num=num-1;
	cout<<"num"<<num;
	factorial=factorial*num;
	}
	cout<<"-"<<factorial;
}
