#include <stdio.h>

maximo (int n1, int n2) {

int z;

if (n1>=n2) {

    z=n1;
}

else {

    z=n2;

}

return z;

}

int main () {

int a, b, c, d;

printf ("Ingrese los datos a, b y c: \n");

    scanf ("%i %i %i", &a, &b, &c);

d=maximo(a,b);

printf ("El valor máximo es: %i", maximo(c,d));


}
