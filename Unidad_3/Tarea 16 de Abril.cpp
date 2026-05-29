#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Escribe un Numero: ";
    cin >> n;
    if (n % 2 == 0) 
	{
        cout << "Es PAR";
    } 
    else 
	{
        cout << "Es IMPAR";
    }

    return 0;
}