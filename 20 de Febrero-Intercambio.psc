Proceso intercambio
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
	Definir a,b,c Como entero;
	
	Escribir "Dime el valor de a: ";
	Leer a;
	Escribir "Dime el valor de b: ";
	Leer b;
	
	// Lógica de intercambio real usando variable auxiliar
	c <- a;
	a <- b;
	b <- c;
	
	Escribir "a=", a;
	Escribir "b=", b;
	
	Escribir "Dime el valor de a: ";
	Leer a;
	Escribir "Dime el valor de b: ";
	Leer b;
	
	// Lógica visual (solo cambia el orden al imprimir)
	Escribir "Programa con truco: ";
	Escribir "a=", b;
	Escribir "b=", a;
	
FinProceso