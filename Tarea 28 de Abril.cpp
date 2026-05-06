// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include <iostream>
int main() 
{
    int n = 10; // Cantidad de números a generar
    int a = 0, b = 1, siguiente;
    std::cout << "Serie de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        std::cout << a << ", ";
        
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    return 0;
}
