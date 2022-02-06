#include <stdio.h>

void pideDatos (float arreglo[], int n) {

    int i;
    printf ("Ingrese un valor");
        for (i=0; i<n; i++) {

            scanf ("%f", &arreglo[i]);
                            }
                                        }

impVect(float array [], int dim) {

    int i;
        for (i=0; i<dim; i++) {

            printf ("%f", array[i]);
                            }

                                 }

prom(float v[], int t) {

int i;
float s=0;

for (i=0; i<t; i++) {

    s=s+v[i];

}
     return (s/t);
}


int main () {

float v1[3], p;
pideDatos(v1, 3); //Se envía el nombre del vector y la dimensión.

impVect (v1,3);
p=prom(v1, 3);

printf ("El promedio es: %f", p);
}
