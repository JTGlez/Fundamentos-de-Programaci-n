#include <stdio.h>
#include <stdlib.h>
int main () {

int i[10][10], j[10][10], k[10][10], R1, R2, C1, C2, contador, acumulador, x, y, z;


do {
printf ("Ingrese la cantidad de renglones de la primera matriz: \n");
scanf ("%d", &R1);
printf ("Ingrese la cantidad de columnas de la primera matriz: \n");
scanf ("%d", &C1);

printf ("Ingrese la cantidad de renglones de la segunda matriz: \n");
scanf ("%d", &R2);
printf ("Ingrese la cantidad de columnas de la segunda matriz: \n");
scanf ("%d", &C2);

} while (R1!=C2);

printf ("Matriz 1: \n");
for (x=0; x<R1; x++){
for (y=0; y<C1; y++){
    printf("Ingrese el coeficiente [%d][%d]: \n ", x+1, y+1);
    scanf ("%d", &i[x][y]);

                    }
}

printf ("Matriz 2: \n");
for (x=0; x<R2; x++){
for (y=0; y<C2; y++){
    printf("Ingrese el coeficiente [%d][%d]: \n ", x+1, y+1);
    scanf ("%d", &j[x][y]);

                    }
}


for (x=0; x<R1; x++){
for (y=0; y<C2; y++){
        k[x][y]=0;
   for (z=0; z<C1; z++){
    k[x][y]=k[x][y]+ ((i[x][z])*(j[z][y]));
   }
                    }
}

//Printing Matrix 1, 2 and 3:

printf ("\n\n\t\t\t Matriz 1: ");
for (x=0; x<R1; x++) {
        printf ("\n\t\t");
    for (y=0; y<C1; y++) {
        printf ("%6d", i[x][y]);
    }
}

printf ("\n\n\t\t\t Matriz 2: ");
for (x=0; x<R2; x++) {
    printf ("\n\t\t");
    for (y=0; y<C2; y++) {
        printf ("%6d", j[x][y]);
    }
}

printf ("\n\n\t\t\t Matriz 3: ");
for (x=0; x<R1; x++) {
    printf ("\n\t\t");
    for (y=0; y<C2; y++) {
        printf ("%6d", k[x][y]);
    }
}


return 0;
}
