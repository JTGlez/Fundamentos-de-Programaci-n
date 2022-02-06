#include <stdio.h>
int main()
{
char pax[]="Juan Sin Miedo"; //Ajusta el límite de caracteres en base a la cadena.
printf("%s %s\n", pax, &pax[4]);
puts(pax);
puts(&pax[4]);
}
