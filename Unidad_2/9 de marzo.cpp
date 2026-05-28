#Include <lostream>
#Include <Window.h>
using manespace std;
int main(){
SetConsoleOutput(CP_UTF8);
SetConsoleCP(CP_UTF8);
float minutos, horas, residuo, min2;
cout<<"Dame la cantidad de minutos a convertir: ";
cin>>minutos;
horas=trunc(minutos/60);
//residuo=(minutos/60)-trunc(minutos/60);
residuo=(minutos/60)-horas;
min2=residuo*60;
cout<<minutos<<" minutos equivale a "<<horas<<":"<<min2<<" horas\n";
printf("%02.0f minutos equivalen a %02.0f:%02.0f horas, minutos,horas", minutos,horas,min2)
return 0;
}
