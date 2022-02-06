#include <stdio.h>

int main(){


int i[100][100], R, C, contador, acumulador, x, y;
printf ("Ingrese la cantidad de renglones de la matriz: \n");
scanf ("%d", &R);
printf ("Ingrese la cantidad de columnas de la matriz: \n");
scanf ("%d", &C);


printf ("Matriz 1: \n");
for (x=0; x<RCCWC; x++){
for (y=0; y<C; y++){
    printf("Ingrese el coeficiente [%d][%d]: \n ", x+1, y+1);
    scanf ("%d", &i[x][y]);

                    }
}

printf ("\n\n\t\t\t Matriz 1: ");
for (x=0; x<R; x++) {
        printf ("\n\t\t");
    for (y=0; y<C; y++) {
        printf ("%6d", i[x][y]);
    }
}


printf ("\n\n\t\t\t Matriz Transpuesta: ");
for (x=0; x<R; x++) {
    printf ("\n\t\t");
    for (y=0; y<C; y++) {
        printf ("%6d", i[y][x]);
    }
}





return 0;
}
