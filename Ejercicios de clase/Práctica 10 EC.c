#include <stdio.h>

int main ( ) {

float montocompra, montopago, montodescuento, precio;
int docena, obsequio;
montopago=0;

printf ("Ingrese el precio del producto: \n");
scanf ("%f", &precio);

printf ("Ingrese la cantidad de docenas del producto: \n");
scanf ("%i", &docena);


if (docena>3) {

    montocompra=docena*precio;

    montodescuento = montocompra*0.3;
    obsequio = docena/3;
               }

else {

    montocompra=docena*precio;
    montodescuento = montocompra*0.1;
    obsequio = 0;
}

montopago=(montocompra-montodescuento);


printf ("El monto de compra es de: %f \n", montocompra);
printf ("El monto de descuento es de: %f \n", montodescuento);
printf ("El monto total a pagar es de: %f \n", montopago);
printf ("La cantidad de obsequios es de: %i \n", obsequio);


return 0;
}
