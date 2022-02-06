#include <stdio.h>

cuadrado(int n) {

    return n*n;

}

int main () {

int resultado, numero=5;

    resultado=cuadrado(numero);
    printf ("El cuadrado del número es: %i \n", resultado);
    printf ("\nY el cuadrado de 3 es: %i", cuadrado(3));

}
