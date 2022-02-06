Proceso EmpresaHoras
	Definir PagoHora,HrSemana,HrDia,SueldoTotal Como Real;
	HrSemana <- 0;
	PagoHora <- 145.75;
	Definir D Como Entero;
	D <- 1;
	Mientras D<7 Hacer
		Escribir '¿Cuántas horas trabajó el empleado el día ',D,'?';
		Leer HrDia;
		HrSemana <- HrSemana+HrDia;
		D <- D+1;
	FinMientras
	SueldoTotal <- HrSemana*PagoHora;
	Escribir 'El trabajador tuvo un total de ',HrSemana,' horas.';
	Escribir 'Su sueldo es de $',SueldoTotal,'.';
FinProceso

