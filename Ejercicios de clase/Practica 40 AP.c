#include <stdio.h>

int main () {

char c;
int x;
float y;

printf ("C: Direccion= %p, contenido =%c \n", &c, c);
printf ("X: %p, contenido X: %i \n", &x, x);
printf ("Y: %p, contenido Y: %f \n", &y, y);

c='h'; x=75; y=3.1415;

printf ("\nC: Direccion= %p, contenido =%c \n", &c, c);
printf ("X: %p, contenido X: %i \n", &x, x);
printf ("Y: %p, contenido Y: %f \n", &y, y);

}
