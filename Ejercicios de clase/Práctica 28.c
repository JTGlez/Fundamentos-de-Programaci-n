#include <stdio.h>

int main () {
float nVentas, A, B, C, CV, TABC, TA, TB, TC, V;
A=0;
B=0;
C=0;
TA=0;
TB=0;
TC=0;
TABC=0;
CV=0;
printf ("Cuantas ventas realizo? \n");
scanf ("%f", &nVentas);
while (CV<nVentas) {
printf ("Introduzca el monto vendido \n");
scanf ("%f", &V);
if (V>1500) {
A=A+1;
TA=TA+V;
}
else
if (V>750){
B=B+1;
TB=TB+1;
}
else {
C=C+1;
TC=TC+V;
}


TABC=TABC+V;
CV=CV+1;

}
printf ("Las ventas mayores a 1500 y su total son: %f y %f \n", A, TA);
printf ("Las ventas menores o iguales a 1500 y mayores a 750 y su total son: %f y %f \n", B, TB);
printf ("Las ventas menores o iguales a 750 y su total son: %f y %f \n", C, TC);
printf ("El total de ventas es de: $ %f \n", TABC);
return 0;

}
