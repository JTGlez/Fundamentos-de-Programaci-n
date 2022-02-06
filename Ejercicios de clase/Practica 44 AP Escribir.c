#include <stdio.h>

int main () {

FILE *apc;
char letra;
printf ("Dame letra");
scanf ("%c", &letra);
printf ("%c", letra);

apc=fopen ("./archivo2.txt", "w");
    fprintf (apc, "%c", letra); //En donde va a imprimir y que va a imprimir
    fclose (apc);

}
