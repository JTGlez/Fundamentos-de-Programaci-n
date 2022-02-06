Algoritmo DivMayorMenos
	Definir n1,n2,Div como reales;
	Escribir "Ingrese dos valores";
	leer n1,n2;
	si n1>n2 y n2<>0 entonces
		Div<-n1/n2;
		Escribir Div;
		
	SiNo
		
		Si n2>n1 y n1<>0 entonces 
			Div<-n2/n1;
			Escribir Div;
		SiNo 
			Escribir "Datos inválidos";
		FinSi
	FinSi
FinAlgoritmo
