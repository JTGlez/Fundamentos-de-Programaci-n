Proceso TresNumerosAscendenteDescendente
	Definir n1,n2,n3 Como Real;
	Definir D Como Entero;
	Escribir 'Introduce 3 números';
	Leer n1,n2,n3;
	Escribir '¿Como desea acomodar sus números?';
	Escribir '1) Descendente 2) Ascendente';
	Leer D;
	Segun D  Hacer
		1:
			Si n3>n2 Y n3>n1 Y n2>n1 Entonces
				Escribir 'La lista de números es: ';
				Escribir n3;
				Escribir n2;
				Escribir n1;
			SiNo
				Si n2>n1 Y n2>n3 Y n3>n1 Entonces
					Escribir 'La lista de números es: ';
					Escribir n2;
					Escribir n3;
					Escribir n1;
				SiNo
					Escribir 'La lista de números es: ';
					Escribir n1;
					Escribir n2;
					Escribir n3;
				FinSi
			FinSi
		2:
			Si n3>n2 Y n3>n1 Y n2>n1 Entonces
				Escribir 'La lista de números es: ';
				Escribir n1;
				Escribir n2;
				Escribir n3;
			SiNo
				Si n2>n1 Y n2>n3 Y n3>n1 Entonces
					Escribir 'La lista de números es: ';
					Escribir n1;
					Escribir n3;
					Escribir n2;
				SiNo
					Escribir 'La lista de números es: ';
					Escribir n3;
					Escribir n2;
					Escribir n1;
				FinSi
			FinSi
	FinSegun
FinProceso

