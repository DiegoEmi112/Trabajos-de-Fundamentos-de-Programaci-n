#include <lostream>
#include <windows.h>
using namespace std;
int main()
vold gotoxy(int x, int y) {
	COORD coord;
	coord,X = X;
	coord,Y =Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main() {
	SetConsoleOurputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout << "Hola, esta es una prueba de la funcion gotoxy"<<end1;
	gotoxy(1,1); //Nueveel cursor a la columna 1; reglon ;
	cout << "Este letrero comienza en la posiciòn (1,1).";
	gotoxy(30,2); //Nueve el cursor a la columna 30, reglon 2
	cout << "Este letrero comienza en la posicion (30,2).";
}







}