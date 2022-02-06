#include <stdio.h>
int main () {

int array[4][4];
int i, j, z;
z=0;

for (i=0; i<4; i++){
for (j=0; j<4; j++){
    printf ("Por favor ingrese unicamente digitos. \n");
    printf("Ingrese el coeficiente [%d][%d]: \n ", i+1, j+1);
    scanf ("%1d", &array[i][j]);
    fflush (stdin);
                    }
}

for (i=0; i<4; i++) {
for (j=0; j<4; j++) {
          if (array[i][j]==0) {
            z=z+1;
          }
     }
}
printf ("Matriz de numeros: \n");
for (i=0; i<4; i++) {
        printf ("\n\t\t");
    for (j=0; j<4; j++) {
        printf ("%6d", array[i][j]);

}
}
printf ("\n La cantidad de ceros en el arreglo es de: %i", z);

return 0;
}

