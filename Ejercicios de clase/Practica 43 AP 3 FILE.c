#include <stdio.h>

int main () {

FILE *ap;

char nmArchivo[]="archivo1.txt";

int valorDevuelto;

ap=fopen ("./arch", "r"); //Permite leer el interior del archivo.

if (ap==NULL) {

    valorDevuelto=1;
    printf ("\nEl archivo no existe. \n");
    puts (nmArchivo);
    printf ("Valor devuelto= %i", valorDevuelto);

}

else {

    valorDevuelto=0;
    printf ("\nEl archivo si existe. \n");
    puts (nmArchivo);
    printf ("Valor devuelto= %i", valorDevuelto);

}

}
