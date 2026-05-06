// Nombre Del Alumno: Diego Emiliano Quiñones Barraza 
// No. De Control: 25041722
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Introduce un numero entero positivo: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: El factorial de un numero negativo no existe.";
    } else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }
    return 0;
}
