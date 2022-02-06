Proceso TresCapicua
	Definir c1, c2, c3, n como Real;
	
    Escribir "Ingrese un numero de tres cifras";
	
	Leer n;
	
	c1 <- trunc (n/100);
	c2 <- trunc (n mod 100)/10;
	c3 <- trunc (n mod 100) mod 10; 
	
	
	Si c1==c3 Entonces
		
		Escribir "El numero es capicua";
		
	SiNo
		
		Escribir "El numero no es capicua";
		
	FinSi
	
	
FinProceso
 