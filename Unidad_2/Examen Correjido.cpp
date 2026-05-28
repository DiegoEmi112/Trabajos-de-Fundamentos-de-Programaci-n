#include<iostream>
#include<windows.h>
using namespace itd;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char equipo
	int jj,jg,je,jp,puntos,pd;
	float pct;
	cout<<"Dime el nombre del equipo: ";
	gets(equipo);
	cout<<"Dime ¿Cuantos partidos ganados?: ";
	cin>>jg;
	cout<<"Dime ¿Cuantos partidos empatados?: ";
	cin>>je;
	cout<<"Dime ¿Cuantos partidos perdidos?: ";
	cin>>jp;
	jj=jg+je+jp;
	puntos=(jg*3)+je;
	pd=jj*3;
	pct=puntos*100/pd;
	cout<<"El equipo "<equipo<<" gano "<<jg<<" partidos, empatado "<<je<<" y perdido "<<jp;
	cout<<"\nObtuvo "<<puntos<<" puntos de "<<pd<<" puntos disponibles ";
	cout<<"\nEl porcentaje de efectividad fue de "
}