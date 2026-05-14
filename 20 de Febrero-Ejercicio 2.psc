Proceso sin_titulo
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
	Definir numero Como Cadena;
	Definir invertido Como Cadena;
	
	Escribir "Ingrese un numero de dos cifras:";
	Leer numero;
	
	invertido <- Concatenar(SubCadena(numero,1,1), SubCadena(numero,0,0));
	
	Escribir "El numero invertido es: ", invertido;
FinProceso