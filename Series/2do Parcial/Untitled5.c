#define <stdio.h>

int main () {

int i, j, n;
printf ("Introduza la cantidad de choferes a evaluar:\t");
scanf ("%i", &n);

char nombres[n][60];
float kilometros[n][6], total;

for (i=0; i<n; i++) {
printf ("Introduzca el nombre del chofer %i:\t",i+1);
scanf ("%s", &nombres[1]);
}

for (j=0; j<n; j++) {
     for (i=0; i<6; i++) {
     printf ("Introduzca el total de km recorridos en el dia %i por %s:\t", i+1, nombres[j]);
     scanf ("%f", &kilometros[j][i]);
     }
}





}
