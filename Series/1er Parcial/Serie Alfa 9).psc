Proceso PromedioPracticas
	Definir n, acum, Prom como Real;
	Definir i, c, d como Entero;
	i<-1;
	acum <-0;
	d<-0;
	Escribir "�Cu�ntas notas ser�n ingresadas?";
	Leer c;
	
	Para i<-1 Hasta c Con Paso 1 Hacer
		Escribir "Escriba la nota";
		Leer n;
		Si n<10 Entonces
			acum <-acum +n;
			d<-d+1;
		SiNo
			
			Escribir "Ingrese una nota v�lida.";
			
			FinSi
		
	FinPara
	
	Prom <- (acum/d);
	Escribir "El promedio de las pr�cticas es de: ",Prom;
	
FinProceso
