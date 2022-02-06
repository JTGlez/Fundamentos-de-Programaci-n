#include <stdio.h>

int opc, reg, op1, op2, op3, op4;

int main () {

    etiqueta: {

   printf("A qué programa desea entrar? \n");
   printf ("1)Estacionamiento\n 2)Docenas\n 3)Lapices\n 4)Dados \n");
   scanf ("%i", &opc);
   switch (opc) {

   case 1: {

   etiqueta1: {

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

   }

printf ("Desea repetir el programa de nuevo?\n 1)Si \n 2)No \n");
scanf ("%i", &op1);

if (op1==1)
    goto etiqueta1;

   }
   break;

   case 2: {

       etiqueta2: {
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

   }

   printf ("Desea repetir el programa de nuevo?\n 1)Si \n 2)No \n");
scanf ("%i", &op2);

if (op2==1)
    goto etiqueta2;


   }
   break;

   case 3: {
       etiqueta3: {
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
   }
   printf ("Desea repetir el programa de nuevo?\n 1)Si \n 2)No \n");
scanf ("%i", &op3);

if (op3==1)
    goto etiqueta3;

   }
   break;

   case 4: {
       etiqueta4: {
       int v1, v2, v3;
printf ("Que puntaje obtuvo en el primer dado? \n");
scanf ("%i", &v1);

printf ("Que puntaje obtuvo en el segundo dado? \n");
scanf ("%i", &v2);

printf ("Que puntaje obtuvo en el tercer dado? \n");
scanf ("%i", &v3);

if (v1==6 && v2==6 && v3==6) {

    printf("Excelente!");
    }

else

    if (v1+v2==12 || v1+v3==12) {

        printf ("Bien!");
    }

else

if (v1==6 || v2==6 || v3==6){

    printf ("Regular!");

}

else {

    printf("Pesimo :(");

}


   }
   printf ("Desea repetir el programa de nuevo?\n 1)Si \n 2)No \n");
scanf ("%i", &op4);

if (op4==1)
    goto etiqueta4;

   }
   break;

   }


printf ("Desea regresar al menu principal? \n 1)Si \n 2)No \n");
scanf ("%i", &reg);

if (reg==1) {
    goto etiqueta;
            }
return 0;
}

}
