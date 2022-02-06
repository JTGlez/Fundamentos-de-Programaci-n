#include <stdio.h>

int main (){

float lapices, pago;

printf ("Ingrese la cantidad de lapices: \n");
scanf ("%f", &lapices);

if (lapices>=1000){

    pago=lapices*0.85;

}

else {

    pago=lapices*0.9;

}

printf ("El total a pagar es de: %f \n", pago);

return 0;
}
