Proceso PromedioDatos
	Definir n,acumulador,dato,promedio Como Real;
	Definir i Como Entero;
	acumulador <- 0;
	promedio <- 0;
	i <- 1;
	Escribir 'Introduce la cantidad de datos';
	Leer n;
	Para i<-1 Hasta n Hacer
		Escribir 'Ingrese el dato ',i;
		Leer dato;
		acumulador <- acumulador+dato;
	FinPara
	promedio <- acumulador/n;
	Escribir 'El promedio de tus ',n,' datos es: ',promedio;
FinProceso

