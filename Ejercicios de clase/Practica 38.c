#include <stdio.h>

void sumaVector (float a1[], float a2[], int d1, int d2) {

float vr[d1];
int i;
    for (i=0; i<d1; i++) {

        vr[i]=a1[i] + a2[i];
    }

}

void pideDatos (float arreglo[], int n) {

    int i;
    printf ("Ingrese un valor");
        for (i=0; i<n; i++) {

            scanf ("%f", &arreglo[i]);
                            }
                                        }

    pideDim () {

    int d;
    printf ("Ingrese la dimension: ");
            scanf ("%i", &d);
            return d;
                }




impVect(float array [], int dim) {

    int i;
        for (i=0; i<dim; i++) {

            printf ("%f", array[i]);
                            }

                                 }


main () {

float v1[3], v2[3], d1, d2;

    pideDatos (v1, 3);

    d1 = pideDim();

    pideDatos (v2, 3);

    d2=pideDim();

    impVect (v1, 3);

    impVect (v2, 3);

    sumaVector (v1, v2, d1, d2);

    printf ("El producto punto es: %f" );
    impVect (vr, 3);


}
