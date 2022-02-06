Proceso ConversionPPY
	Definir m, cm, ft, in , yrd Como Real;
	Escribir "Ingresa una medida en {m}";
	Leer m;
	cm<- m*100;
	in<-cm/2.54;
	ft<-in/12;
	yrd<-ft/3;
	
	Escribir "Tus resultados son:";
	Escribir cm, "{cm}";
	Escribir ft, "{ft}";
	Escribir in, "{in}";
	Escribir yrd, "{yrd}";
	
	
FinProceso
