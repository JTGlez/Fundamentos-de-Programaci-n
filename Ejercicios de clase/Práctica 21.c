#include <stdio.h>
int main () {
int i;
float a, n;
a=0;
for (i=0; i<5; i++) {
     printf ("Ingrese un número: \n");
     scanf ("%f", &n);
     a= a+n;
}
printf ("La suma de los cinco numeros es: %f \n", a);
printf ("Su promedio es de: %f \n" , (a/i));
return 0;
}
