// Nombre del alumno: Diego Emiliano Quiñones Barraza 
// Numero de control: 25041722
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // 1. Pedir la cantidad de letras
    cout << "Ingrese el numero de letras para el arreglo: ";
    cin >> n;

    // Creamos un vector de caracteres de tamaño 'n'
    vector<char> letras(n);

    // 2. Capturar el arreglo elemento por elemento
    cout << "Ingrese las " << n << " letras una por una:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Letra [" << i + 1 << "]: ";
        cin >> letras[i];
    }

    // 3. Imprimir el arreglo elemento por elemento
    cout << "\nEl arreglo capturado es: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Posicion " << i << ": " << letras[i] << endl;
    }

    return 0;
}