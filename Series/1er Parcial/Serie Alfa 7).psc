Proceso PromedioMenor
	Definir p1, p2, p3, p4, pmin, prom como Real;

	Escribir "Ingrese la nota 1";
	Leer p1;
	Escribir "Ingrese la nota 2";
	Leer p2;
	Escribir "Ingrese la nota 3";
	Leer p3;
	Escribir "Ingrese la nota 4";
	Leer p4;
	
	pmin <-p1;
	
	Si p2<pmin Entonces
		pmin <- p2;
		
	FinSi
	
	Si p3<pmin Entonces
		pmin <- p3;
		
	FinSi
	
	Si p4<pmin Entonces
		pmin <- p4;
		
	FinSi
	
	pmin <- ((p1+p2+p3+p4-pmin)/3);
	
	Escribir "El promedio es de ", pmin;
	
FinProceso
