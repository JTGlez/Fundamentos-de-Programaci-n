Proceso NumeroPrimo
	Definir n,s,d Como Real;
	Definir i Como Entero;
	s <- 0;
	d <- 0;
	i <- 1;
	Escribir 'Teclea un número';
	Leer n;
	Mientras n>=i Hacer
		s <- n MOD i;
		Si s==0 Entonces
			d <- d+1;
		SiNo
			d <- d;
		FinSi
		i <- i+1;
	FinMientras
	Si d==2 Entonces
		Escribir 'El número es primo';
	SiNo
		Escribir 'El número no es primo';
	FinSi
FinProceso

