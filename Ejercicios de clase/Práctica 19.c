#include <stdio.h>

int main () {
int i, a;
i=0;
a=0;
do {
i=i+1;
a= a+i;
} while (i<10);

printf ("La suma es: %i", a);

return 0;
}
