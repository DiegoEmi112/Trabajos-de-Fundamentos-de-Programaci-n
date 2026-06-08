//Nombre del Alumno: Diego Emiliano Quiñones Barraza
//Numero de Control: 25041722
#include <iostream>
using namespace std;
void captura(void);
int maximo(int i,int j);
int main(void)
{
    int mayor=0;
    captura();
    mayor=maximo(1,-1);
    cout<<"El mayor es "<<mayor;
    cout<<"\nEl mayor es: "<<maximo(1,10);
    return 0;
}
void captura(void)
{
    int x,y;
    cout<<"Dame un numero entero ";
    cin>>x;
    cout<<"Dame otro numero entero ";
    cin>>y;
    cout<<"El mayor es: "<<maximo(x,y)<<'\n';
}
int maximo(int i,int j)
{
    if(i>j)
        return i;
    else
        return j;
}