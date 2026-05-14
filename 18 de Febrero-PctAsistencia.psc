Proceso pctAsistencia
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
    Definir numH,numM,total Como Entero;
    Definir pctH,pctM Como Real;
    
    Escribir "Dime la cantidad de mujeres asistentes: ";
    Leer numM;
    
    Escribir "Dime la cantidad de hombre asistentes: ";
    Leer numH;
    
    total<-numM+numH;
    
    pctM<-(numM*100)/total;
    pctH<-numH*100/total;
    
    Escribir numM," mujeres representan el ",pctM," % de un total de ",total," asistentes";
    Escribir numH," hombres representan el ",pctH," % de un total de ",total," asistentes";
    Escribir "Suma de porcentajes: ",pctM+pctH;
FinProceso