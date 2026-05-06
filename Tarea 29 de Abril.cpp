// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include <iostream>
using namespace std;
int main() {
    int n = 15; // Cantidad de números que queremos mostrar
    long a = 0, b = 1, siguiente;
    cout << "Serie: ";
    for (int i = 0; i < n; i++) {
        cout << a << " "; // Imprimimos el número actual
        siguiente = a + b; // Sumamos los dos anteriores
        a = b;             // El segundo pasa a ser el primero
        b = siguiente;     // La suma pasa a ser el segundo
    }
    return 0;
}
