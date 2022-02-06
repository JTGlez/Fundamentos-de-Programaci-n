//Funciòn saludo: creaciòn del primer programa en lenguaje C usando funciones. El orden se invierte, sin embargo, es lo mismo.

#include <stdio.h>
#include <locale.h>

void fsaludar () {

    printf ("Hola");

}

void fdespedida () {

    printf ("\nBai");
    fdespedida2();

}

void fdespedida2() {

    printf("\n¡Hasta luego!");

}

int main () {

    setlocale(LC_CTYPE,"spanish");
    fsaludar();
    printf ("\n¿Cómo estás? :) ");
    fdespedida();

}

