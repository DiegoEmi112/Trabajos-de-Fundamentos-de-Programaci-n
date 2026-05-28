Algoritmo funcionesCadenas
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
	Definir cad1, cad2 Como Caracter;
	Definir num Como Entero;
	
	Escribir "Dame una cadena: ";
	Leer cad1;
	num <- Longitud(cad1);
	Escribir "Tu cadena tiene ", num, " caracteres";
	Escribir "La primera letra es: ", Subcadena(cad1,0,0);
	
	Esperar Tecla;
	Borrar Pantalla;
	
	cad2 <- Mayusculas(cad1);
	Escribir cad1, " en mayúsculas es: ", cad2;
	Escribir cad2, " en minúsculas es: ", Minusculas(cad2);
	
	cad2 <- Minusculas(cad2);
	Escribir cad2;
	
	Escribir "Dame un número:";
	Leer num;
	
	cad1 <- ConvertirATexto(num);
	
	Escribir "cad1: ", cad1;
	Escribir "num +1: ", num + 1;
	Escribir "Cad1+5:", ConvertirANumero(cad1) + 5;
	Escribir "cad1+cad2: ", Concatenar(cad1, cad2);
	
FinAlgoritmo