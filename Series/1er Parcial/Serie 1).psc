Proceso TresNumerosMayor
	Definir n1,n2,n3 Como Real;
	Escribir 'Introduce 3 n�meros';
	Leer n1,n2,n3;
	Si n3>=n1 Y n3>=n2 Entonces
		Escribir 'El n�mero m�s grande es ',n3;
	SiNo
		Si n2>=n1 Y n2>=n3 Entonces
			Escribir 'El n�mero m�s grande es ',n2;
		SiNo
			Escribir 'El n�mero m�s grande es ',n1;
		FinSi
	FinSi
FinProceso

