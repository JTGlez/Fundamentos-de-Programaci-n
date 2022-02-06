#include <stdio.h>

int main () {
float p, pt;
int i;
p=7.5;
pt=0;
i=1;
for (i=1; i<49; i++) {
p=p*2;
printf ("El pago mensual es de: $ %f \n", p);
pt=pt+p;
}
printf ("El pago total es de: $ %f", pt);
return 0;
}
