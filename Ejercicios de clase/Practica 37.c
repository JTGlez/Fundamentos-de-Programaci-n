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

float fproducto(float v1[], float v2[], int t) {

int i;
float s=0;

for (i=0; i<t; i++) {

        s=s+ (v1[i]*v2[i]);
}
return s;
}


main () {

float v1[3], v2[3];

    pideDatos (v1, 3);

    pideDatos (v2, 3);

    impVect (v1, 3);

    impVect (v2, 3);

    fproducto (v1, v2, 3);

    printf ("El producto punto es: %f", fproducto (v1, v2, 3));


}
