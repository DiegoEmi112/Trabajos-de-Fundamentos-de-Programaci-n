1 #include <iostream>
2 #include <windows.h>
3 using namespace std;
4 int main(){//Calcula área y circunferencia
5 SetConsoleOutputCP (CP_UTF8);
6 SetConsoleCP(CP_UTF8);
7 float radio, area=0.0, circunferencia=0.0;
8 const float PI=3.1416;
9 cout<<"PI="<<PI<<"\n";
10 //PI=0; //no se puede modificar una constante
11 cout<<fixed;
12 cout.precision(4);
13 cout<<"Dame el radio de un círculo: ";
14 cin>>radio;
15 area=PI*radio*radio;
16 circunferencia=PI*radio*2;
17 cout<<"Usando precisión a cuatro decimales con fixed\n";
18 cout<<"Para un círculo de radio: "<<radio<<"\n";
19 cout<<"El área es: "<<area<<"\n";
20 cout<<"La circunferencia es: "<<circunferencia<<"\n";
21 cout<<"Usando precisión a dos decimales con printf\n";
22 printf("Para un círculo de radio: %5.2f\n",radio);
23 printf("El área es: %5.2f\n", area);
24 printf("La circunferencia es: %5.2f\n", circunferencia);
25 return 0;
26 }