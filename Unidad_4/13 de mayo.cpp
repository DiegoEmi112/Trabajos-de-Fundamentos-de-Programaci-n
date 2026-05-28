//Nombre del Alumno: Diego Emiliano Quiñones Barraza
//No. de control: 25041722
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // Declaración de variables y arreglos según la imagen 1000046210.jpg
    long int r, y[5], x[] = {50, 30, -1, 0, -32768};
    int i = 0;

    puts("Impresion de los arreglos antes de la asignacion de uno a otro");
    for (i = 0; i < 5; i++) {
        // En la imagen se usa cout para esta sección
        cout << "x[" << i << "]=" << x[i] << "          y[" << i << "]=" << y[i] << "\n";
    }
    puts("Asignacion de los valores de x en y, espere un momento");
    for (i = 0; i < 5; i++) {
        y[i] = x[i];
    }

    puts("Impresion de los arreglos despues de la asignacion");
    for (i = 0; i < 5; i++) {
        // En la imagen se usa printf para esta sección
        printf("x[%d]=%10ld  y[%d]=%10ld\n", i, x[i], i, y[i]);
    }

    puts("Presione una tecla para terminar");
    
    // Agregamos una pausa para que no se cierre la consola inmediatamente
    getchar(); 

    return 0;
}