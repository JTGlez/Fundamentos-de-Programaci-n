#include <stdio.h>
int main () {
int c, i;
float a, n;
a=0;
printf ("Cuantas veces quieres sumar?");
scanf ("%i", &c);
for (i=0; i<c; i++) {
     printf ("Ingrese un número: \n");
     scanf ("%f", &n);
     a= a+n;
}
printf ("La suma de los cinco numeros es: %f \n", a);
printf ("Su promedio es de: %f \n" , (a/c));
return 0;
}
