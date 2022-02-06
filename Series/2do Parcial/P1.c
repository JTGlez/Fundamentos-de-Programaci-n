#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
setlocale(LC_CTYPE,"spanish");

int i, j, nA;

printf("Ingrese el número de alumnos: \n");
scanf ("%i", &nA);


float promedio[nA], auxF;
char alumno[nA][100], auxS[100];

for (i=1; i<=nA; i++) {
    printf("Ingrese el nombre del alumno %i: \n", i);
    scanf("%s", &alumno[i]);
    printf("Ingrese el promedio del alumno %i: \n", i);
    scanf("%f", &promedio[i]);

}

for (i=1; i<=nA; i++) {
    for (j=1; j<=nA; j++){
        if (promedio[j]>promedio[j+1]) {
            //Se enviará el valor de promedio[j+1] a un auxiliar float.
            auxF=promedio[j+1];
            //Se enviará el valor de alumno [j+1] a un auxiliar string.
            strcpy (auxS, alumno[j+1]);                                   //...valores guardados.
            //Inicia el proceso de traslado de promedio[j+1] a promedio[j].
            promedio[j+1]=promedio[j];
            strcpy (alumno[j+1], alumno[j]);
            //Reenviamos los antiguos valores a la posición j.
            promedio[j]=auxF;
            strcpy (alumno[j], auxS);
        }
    }
    //Iteración para la siguiente casilla, con fin de verificar cada caso.
}

printf("Datos ordenados: \n");
for (i=1; i<=nA; i++) {
        printf("%s \n Calificación: %f \n \n", alumno[i], promedio[i]);
    }

}
