Proceso VentasHerramientas
	Definir nVentas,D,A,B,C,CV,TABC,TA,TB,TC,V Como Real;
	A <- 0;
	B <- 0;
	C <- 0;
	TA <- 0;
	TB <- 0;
	TC <- 0;
	TABC <- 0;
	CV <- 0;
	Escribir '¿Cuantas ventas realizó?';
	Leer nVentas;
	Mientras CV<nVentas Hacer
		Escribir 'Introduzca el monto vendido:';
		Leer V;
		Si V>1500 Entonces
			A <- A+1;
			TA <- TA+V;
		SiNo
			Si V>750 Entonces
				B <- B+1;
				TB <- TB+V;
			SiNo
				C <- C+1;
				TC <- TC+V;
			FinSi
		FinSi
		TABC <- TABC+V;
		CV <- CV+1;
	FinMientras
	Escribir 'Las ventas mayores a 1500 y su total son: ',A,' y ',TA;
	Escribir 'Las ventas menores o iguales a 1500 y mayores a 750 y su total son: ',B,' y ',TB;
	Escribir 'Las ventas menores o iguales a 750 y su total son: ',C,' y ',TC;
	Escribir 'El total de ventas es: ',TABC;
FinProceso

