Proceso CienMultiplos3
	Definir c,s Como Real;
	Definir i Como Entero;
	i <- 1;
	s <- 0;
	Mientras i<101 Hacer
		Si i MOD 3==0 Entonces
			s <- s+i;
			Escribir i;
		FinSi
		i <- i+1;
	FinMientras
	Escribir 'La suma de los primeros 100 múltiplos de 3 es: ',s;
FinProceso

