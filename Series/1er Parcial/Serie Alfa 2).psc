Proceso NumerosSumas 
	
	Definir c1, c2, c3, c4, cn, n como Real;
	cn <-0;
    Escribir "Ingrese un numero de cuatro cifras";
	
	Leer n;
	
	c1 <- trunc (n/1000);
	c2 <- trunc ((n mod 1000)/100);
	c3 <- trunc (((n mod 1000) mod 100)/10);
	c4 <- trunc (n mod 10);
	
	cn<-c1+c2+c3+c4;
	
	
	
	Si n<1000 Entonces
		
		Escribir "El numero es menor a cuatro cifras.";
		
	SiNo
		
		Si c1<10 y c2<10 y c3<10 y c4<10 Entonces
			
			Escribir cn,;
			
			
		SiNo
			
			Escribir "El número es mayor a cuatro cifras.";
			
		FinSi
		
			
	FinSi
	
	
FinProceso

