//Nombre del alumno: Diego Emiliano Quiñones Barraza
//No. de control: 25041722
#include<windows.h>
#include<iostream>
#include<time.h>
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);



do{


int precio,x;
strand(time(0));
precio=rand()%10;
cout<<"Dime el precio (entre 0 y 100): ";
cin>>x;
if(x>precio)
cout<<