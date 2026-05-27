#include <iostream>
//Nombre del Alumno: Diego Emiliano Quiñones Barraza
//Numero de control: 25041722
#include <windows.h>
#include <time.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main( ) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int m1[10][10], m2[10][10], m3[10][10];
    int i, j, n;
    srand(time(0));
    do {
        cout << "¿Cuántos elementos por lado tiene la matriz <2-10>: ";
        cin >> n;
    } while(n > 10 or n < 2);
    system("cls");
for(i=0; i<n; i++) { //Ciclo para renglones
    for(j=0; j<n; j++) { //Ciclo para columnas
        m1[i][j] = rand() % 10;
        m2[i][j] = rand() % 10;
        m3[i][j] = m1[i][j] + m2[i][j];
        
        gotoxy(n + j * 3, i); 
        printf("%2d", m1[i][j]);
        
        gotoxy(n * 5 + j * 3, i); 
        printf("%2d", m2[i][j]);
        
        gotoxy(n * 9 + j * 3, i); 
        printf("%2d", m3[i][j]);
    }
    printf("\n"); //cout << "\n";
}
return 0;
}