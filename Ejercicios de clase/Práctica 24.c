#include <stdio.h>
int main () {
int c, i, acupositivo, acunegativo, acucero;
float a, n;
acucero=0;
acupositivo=0;
acunegativo=0;
printf ("Cuantas veces quieres sumar?");
scanf ("%i", &c);
for (i=0; i<c; i++) {
     printf ("Ingrese un número: \n");
     scanf ("%f", &n);
     if (n>0) {
        printf ("El numero es positivo \n");
        acupositivo=acupositivo+1;
     }
     else
     if (n<0) {
        printf ("El numero es negativo \n");
        acunegativo=acunegativo+1;
     }
     else {
        printf ("El numero es 0 \n");
        acucero=acucero+1;
     }
}

printf ("El total de valores positivos es de: %i \n", acupositivo);
printf ("El total de valores negativos es de: %i \n", acunegativo);
printf ("El total de valores cero es de: %i \n", acucero);
return 0;
}
