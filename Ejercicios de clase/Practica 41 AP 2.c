#include <stdio.h>

int main () {

char c, *apc;
int x, *apx;
float y, *apy;

c='h'; x=75; y=3.1415;

printf ("\nC: Direccion= %p, contenido =%c \n", &c, c);
printf ("X: %p, contenido X: %i \n", &x, x);
printf ("Y: %p, contenido Y: %f \n", &y, y);

apc=&c;
apx=&x;
apy=&y;

printf ("Apuntador de c: direccion= %p, contenido= %p \n", &apc, apc); //Visualiza la direccion del apuntador y la direccion a la que apunta.

printf ("*apc= %c", *apc); //Deseo ver el contenido de la direccion a la que apunta.

printf ("\nApuntador de x: direccion= %p, contenido= %p \n", &apx, apx);

printf ("*apx= %i", *apx);

printf ("\nApuntador de y: direccion= %p, contenido= %p \n", &apy, apy);

printf ("*apy= %f", *apy);
}
