#include <stdio.h>
int main () {
int i, t;
printf ("Que tabla de multiplicar desea?");
scanf ("%i", &t);
for (i=0; i<=10; i+1) {
    printf("%i * %i = %i \n", t, i, t*i);
    i=i+1;
}
return 0;
}
