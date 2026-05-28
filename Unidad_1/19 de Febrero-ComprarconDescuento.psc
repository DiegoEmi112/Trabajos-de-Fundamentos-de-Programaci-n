Algoritmo compraConDescuento
	// Nombre del alumno: Diego Emiliano Quiñones Barraza 
    // Numero de control: 25041722
	Definir totalCompra, pagoFinal, desc Como Real;
	
	Escribir "Dime el total de la compra: ";
	Leer totalCompra;
	
	desc <- totalCompra * .15;
	pagoFinal <- totalCompra - desc;
	
	Escribir "Importe: ", totalCompra;
	Escribir "Descuento: -", desc;
	Escribir "Total neto: ", pagoFinal;
	
	Escribir "Importe: ", totalCompra, " Neto: ", totalCompra * .85;
FinAlgoritmo