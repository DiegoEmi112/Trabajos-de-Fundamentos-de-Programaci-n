Algoritmo sin_titulo
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
	Definir numero, decena, unidad, invertido Como Entero;
	
	Escribir "Ingrese un numero de dos cifras:";
	Leer numero;
	
	decena <- Trunc(numero / 10);
	unidad <- numero MOD 10;
	
	invertido <- (unidad * 10) + decena;
	
	Escribir "El numero invertido es: ", invertido;
FinAlgoritmo