Proceso rectangulo
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
	Definir base, altura, area, perimetro Como Real;
	
	Escribir "Cuánto mide la base del rectángulo? ";
	Leer base;
	
	Escribir "Cuánto mide la altura del rectángulo? ";
	Leer altura;
	
	perimetro <- (base * 2) + (altura * 2); // base + base + altura + altura
	area <- base * altura;
	
	Escribir "Perímetro = ", perimetro;
	Escribir "Área = ", area;
	
	// Estas líneas repiten el cálculo directamente en el Escribir
	Escribir "Perímetro = ", (base * 2) + (altura * 2);
	Escribir "Área = ", base * altura;
	
FinProceso