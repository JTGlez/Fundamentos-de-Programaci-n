Proceso ProductoPagos
	Definir p,pt Como Real;
	Definir i Como Entero;
	p <- 7.5;
	i <- 1;
	pt <- 0;
	Para i<-1 Hasta 48 Hacer
		p <- p*2;
		Escribir 'El pago mensual es de: ',p;
		pt <- pt+p;
	FinPara
	Escribir 'El pago total es de: ',pt;
FinProceso

