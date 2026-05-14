Proceso comisiones
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
	Definir sb, v1, v2, v3, comision, sueldoTotal Como Real;
	
	Escribir "Dime el sueldo base: ";
	Leer sb;
	
	Escribir "Dime el valor de la venta 1: ";
	Leer v1;
	
	Escribir "Dime el valor de la venta 2: ";
	Leer v2;
	
	Escribir "Dime el valor de la venta 3: ";
	Leer v3;
	
	// Cálculo directo
	sueldoTotal <- sb + ((v1 + v2 + v3) * .1);
	Escribir "El sueldo total es: ", sueldoTotal;
	
	// Cálculo usando la variable comisión
	comision <- (v1 + v2 + v3) * .1;
	sueldoTotal <- sb + comision;
	
	Escribir "El sueldo total es: ", sueldoTotal;
FinProceso