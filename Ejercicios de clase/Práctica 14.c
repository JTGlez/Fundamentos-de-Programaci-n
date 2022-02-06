#include <stdio.h>
#include <math.h>

int main () {

float A, B, C, R1, R2;

printf ("Ingresa el coeficiente A");
scanf ("%f", &A);

printf ("Ingresa el coeficiente B");
scanf ("%f", &B);

printf ("Ingresa el coeficiente C");
scanf ("%f", &C);

R1= (-B+(sqrt((B*B)-(4*A*C))))/(2*A);
R2= (-B-(sqrt((B*B)-(4*A*C))))/(2*A);

printf ("La primera raiz es: %f", R1);
printf ("La segunda raiz es: %f", R2);


return 0;
}
