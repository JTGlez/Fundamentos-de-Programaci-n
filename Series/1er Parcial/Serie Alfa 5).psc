Proceso BaseAlturaFigura
	Definir r, h, x, AT, AC, ATotal Como Real;
	Escribir "Ingrese el radio";
	Leer r;
	Escribir "Ingrese el cateto";
	Leer x;
	h<- rc(x^2-r^2);
	AT<-(r*h);
	AC<-((Pi*r^2)/2);
	ATotal <- AT + AC;
	Escribir "El área total es de ", ATotal;
	
FinProceso
