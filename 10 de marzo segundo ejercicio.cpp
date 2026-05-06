// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc,ri,rb,cf,tp,tr,pd,cfp;
	cout<<"Las respuestas correctas valen 5 puntos c/u\n";
	cout<<"Las respuestas incorrectas valen 1 puntos c/u\n";
	cout<<"Las respuestas en blanco valen 0 puntos c/u\n";
	cout<<"Dime la cantidad de respuestas correctas: ";
	cin>>rc;
	cout<<"Dime la cantidad de respuestas incorrectas: ";
	cin>>ri;
	cout<<"Dime la cantidad de respuestas en blanco: ";
	cin>>rb;
	cf=(rc*5)+(ri*(-1))+(rb*0);//formula confusa cf=(rc*5)-ri
	cout<<"La calificacion final es: "<<cf;
	printf("\nLa calificacion final es: %d",cf);
	cf=rc*5-ri;
	cout<<"\nLa calificacion final es: "<<cf;
	printf("\nLa calificacion final es: %d",cf);
	tr=rc+ri+rb;
	pd=tr*5;
	cfp=cf*100/pd;
	cout<<"\nLa calificacion ponerada a 100% es: "<<cfp;
	return 0;
}
