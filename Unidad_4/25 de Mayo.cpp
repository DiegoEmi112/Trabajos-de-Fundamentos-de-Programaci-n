//Nombre del Alumno: Diego Emiliano Quiñones Barraza
//Numero de Control: 25041722
#include<iostream>
#include<time.h>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.x=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	int r,x,vec[10];
	sprand(time(0));
	printff("Maximice la pantalla y presione una tecla");
	getche();
	system("CLS");
	for(r=0;r<=78;r++){
		gotoxy(r,0);
		printf("*");
		gotoxy(r,18);
		printf("*");
		for(x=9999999;x<99999999;x++);
	}
	for(r=0;r<18;r++){
		gotoxy(0,r);
		printf("*");
		gotoxy(79,r);
		printf("*");
		for(x=-9999999;x<9999999;x++);
	}
	gotoxy(30,2);
	cout<<"Impresion  del vector";
	for(r=0;r<10;r++){
		vec[r]=rand()%100;
		gotoxy(40,r+3);
		printf("%d",vec[r]);
		for(x=9999999;x<999999999;x++);
    }
    return 0;
}