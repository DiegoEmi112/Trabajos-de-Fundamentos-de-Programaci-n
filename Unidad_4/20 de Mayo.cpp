//Nombre del alumno: Diego Emiliano Quiñones Barraza
//numero de control: 25041722
#include <iostream> 
#include <time.h>
#include <windows.h>
using namespace std;
int main( ){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int matriz[10][10];
    int i,j,n;
    int renglon_elegido, columna_elegida; 
    
    srand(time(0)); 
    do{
        cout<<"Dime cuántos elementos por lado tiene la matriz? <2-10>";
        cin>>n;
    }while(n>10 or n<2);
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            matriz[i][j]=rand()%10; 
    cout<<"Impresion de la matriz\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",matriz[i][j]);
        }
        cout<<"\n";
    }
    cout<<"\n¿Qué renglón (horizontal) deseas ver? <0 a "<<n-1<<">: ";
    cin>>renglon_elegido;
    cout<<"¿Qué columna (vertical) deseas ver? <0 a "<<n-1<<">: ";
    cin>>columna_elegida;
    cout<<"\nImpresion del renglon (Horizontal):\n";
    for(j=0;j<n;j++){
        printf("%3d", matriz[renglon_elegido][j]);
    }
    cout<<"\n";
    cout<<"\nImpresion de la columna (Vertical):\n";
    for(i=0;i<n;i++){
        printf("%3d\n", matriz[i][columna_elegida]); 
    }
    return 0;
}