Proceso calificacionFinal
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
    Definir prom,c1,c2,c3,ef,tf,cf Como Real;
    
    Escribir "Dime la calificación 1:";
    Leer c1;
    
    Escribir "Dime la calificación 2:";
    Leer c2;
    
    Escribir "Dime la calificación 3:";
    Leer c3;
    
    prom<-((c1+c2+c3)/3)*.55;
    
    Escribir "Dime la calificación del examen final: ";
    leer ef;
    ef<-ef*.3;
    
    Escribir "Dime la calificación del trabajo final: ";
    leer tf;
    tf<-tf*.15;
    
    cf<-prom+ef+tf;
    
    Escribir "La calificación final es: ",cf;
FinProceso