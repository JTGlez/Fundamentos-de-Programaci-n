Proceso Vincultores
	Definir TipoUva, TamanoUva, PrecioUva, KilosProducidos, GananciaTotal como Reales;
	Definir T Como Entero;
	Escribir "¿Cuántos kilos produjo?";
	Leer KilosProducidos;
	Escribir "¿Cuánto es el precio inicial?:";
	Leer PrecioUva;
	Escribir "Ingrese el tipo de uva";
	Escribir "1)A y 2)B";
	Leer T;
	Segun T hacer
		1:
			Escribir "Ingrese el tamaño de la uva";
			Escribir "1)Tamaño 1 2)Tamaño 2";
			Leer TamanoUva;
			Segun TamanoUva hacer
				1:
					PrecioUva<- PrecioUva + 0.20;
					GananciaTotal<-PrecioUva*KilosProducidos;
					Escribir "La ganancia total es de: ", GananciaTotal;
					
				2:
					
					PrecioUva <-PrecioUva + 0.30;
					GananciaTotal<-PrecioUva*KilosProducidos;
					Escribir "La ganancia total es de: ", GananciaTotal;
					
				De otro modo:	
					
					Escribir "Ingrese una opción válida";
			
				
			FinSegun
			
			
		2:
			Escribir "Ingrese el tamaño de la uva";
			Escribir "1)Tamaño 1 2)Tamaño 2";
			Leer TamanoUva;
			Segun TamanoUva hacer
				1:
					PrecioUva<- PrecioUva - 0.30;
					GananciaTotal<-PrecioUva*KilosProducidos;
					Escribir "La ganancia total es de: ", GananciaTotal;
					
				2:
					
					PrecioUva <-PrecioUva - 0.50;
					GananciaTotal<-PrecioUva*KilosProducidos;
					Escribir "La ganancia total es de: ", GananciaTotal;
					
				De otro modo:	
					
					Escribir "Ingrese una opción válida";
			
			FinSegun
			
		De Otro Modo:
			
			Escribir "Ingrese una opción válida.";	
			
	FinSegun
	
FinProceso
