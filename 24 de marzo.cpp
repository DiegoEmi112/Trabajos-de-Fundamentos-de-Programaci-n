#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int num1, num2, num3,prom;
	string mes;
	cout<<"Dime tu primera Calificacion: ";
	cin>>num1;
	cout<<"Dime tu segunda calificacion: ";
	cin>>num2;
	cout<<"Dime tu tercera clasificacion:";
	cin>>num3;
	prom=(num1+num2+num3)/3;
	cout<<nombre<<", tu promedio es: "<<prom<<", y tu calificacion final es: ";
	if(prom>=90 && prom<=100){//prom>89 && prom<101
	cout<< "A";
	}
	else{
		if(prom>=80 && prom<=89){
			cout<<"B";
		}
		else{
			if(prom>=70 && prom<=79){
				cout<<"C";
			}
			else{
				if(prom>=60 && prom<=69){
					cout<<"D";
				}
				else{
					if(prom>=0 && prom<=59){
						cout<<"NA";
					}
					else{
						cout<<"Valores Invalidos";
					}
				}
			}
		}
	}
	return 0;
}