#include <stdio.h>
int main () {
int c, i, acupositivo, acunegativo, acucero;
float a, n, spositivo, snegativo;
acucero=0;
acupositivo=0;
acunegativo=0;
spositivo=0;
snegativo=0;
printf ("Cuantas veces quieres sumar? \n");
scanf ("%i", &c);
for (i=0; i<c; i++) {
     printf ("Ingrese un número: \n");
     scanf ("%f", &n);
     if (n>0) {
        printf ("El numero es positivo \n");
        acupositivo=acupositivo+1;
        spositivo= spositivo+n;
     }
     else
     if (n<0) {
        printf ("El numero es negativo \n");
        acunegativo=acunegativo+1;
        snegativo= snegativo +n;
     }
     else {
        printf ("El numero es 0 \n");
        acucero=acucero+1;
     }
}
printf ("El total de valores positivos es de: %i \n", acupositivo);
printf ("La suma de los numeros positivos es de: %f \n", spositivo);
printf ("El promedio de los numeros positivos es de: %f / %i = %f \n", spositivo, acupositivo, spositivo/acupositivo);
printf ("El total de valores negativos es de: %i \n", acunegativo);
printf ("La suma de los numeros negativo es de: %f \n", snegativo);
printf ("El promedio de los numeros negativos es de: %f / %i = %f \n", snegativo, acunegativo, snegativo/acunegativo);
printf ("El total de valores cero es de: %i \n", acucero);
return 0;
}
