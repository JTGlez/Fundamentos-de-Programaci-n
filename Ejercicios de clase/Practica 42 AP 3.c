#include <stdio.h>

int main () {

int A[5]={2, 4, 6, 8, 10}, i; //2, 4, 6, 8 y 10.




int j, *ap;

printf ("%i \n", A[0]);

printf ("\n%p\n", &A[0]);

ap=&A[0]; //Asigna la direccion a la variable ap.

printf ("%p \n", ap);

printf ("%i \n", j ); //Solo imprime basura...

j=*ap; //Imprime lo que contiene la direccion guardada en ap.

printf ("%i \n", j);



}
