Proceso TipoTriangulo
	Definir n1,n2,n3 Como Real;
	Escribir 'Introduce el primer lado del tri�ngulo';
	Leer n1;
	Escribir 'Introduce el segundo lado del tri�ngulo';
	Leer n2;
	Escribir 'Introduce el tercer lado del tri�ngulo';
	Leer n3;
	Si n1==0 O n2==0 O n3==0 Entonces
		Escribir 'Un lado es igual a 0: El tri�ngulo no existe.';
	SiNo
		Si n1==n2 Y n1==n3 Y n1>0 Y n2>0 Y n3>0 Entonces
			Escribir 'El tri�ngulo es equil�tero.';
		SiNo
			Si n1==n2 O n1==n3 O n2==n3 Y n1>0 Y n2>0 Y n3>0 Entonces
				Escribir 'El tri�ngulo es is�sceles.';
			SiNo
				Si n1>0 Y n2>0 Y n3>0 Entonces
					Escribir 'El tri�ngulo es escaleno.';
				SiNo
					Escribir 'Lados inv�lidos.';
				FinSi
			FinSi
		FinSi
	FinSi
FinProceso

