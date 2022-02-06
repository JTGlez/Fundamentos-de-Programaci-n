#include <stdio.h>

int main () {

float pago;
int h, m;
printf ("Ingrese las horas que ha estado estacionado: \n ");
scanf ("%i", &h);
printf ("Ingrese los minutos que ha estado estacionado: \n ");
scanf ("%i", &m);

if (m>=0){
    h=h+1;
    pago=h*2.5;
    printf ("El total a pagar es: %f", pago);
        }
    else {
        printf ("Ingrese un dato válido.");
    }
return 0;
}
