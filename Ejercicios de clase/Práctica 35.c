#include <stdio.h>


suma() {

float n1, n2, z;

printf ("Ingrese dos nùmeros: \n");
scanf ("%f %f", &n1, &n2);


z=(n1+n2);
printf ("El resultado es: %f", z);

}

resta() {

int opc;

float n1, n2, z;

printf ("Ingrese dos nùmeros: \n");
scanf ("%f %f", &n1, &n2);

printf (" 1)n1-n2 o 2)n2-n1 \n");
scanf ("%i", &opc);

switch (opc) {

case 1: {

    z= n1-n2;
    printf ("El resultado es: %f", z);

}break;

case 2: {

    z= n2-n1;
    printf ("El resultado es: %f", z);

} break;

}

}

multiplicacion() {

float n1, n2, z;

printf ("Ingrese dos nùmeros: \n");
scanf ("%f %f", &n1, &n2);

z=(n1*n2);

printf ("El resultado es: %f", z);


}

division () {

int opc;

float n1, n2, z;

printf ("Ingrese dos nùmeros: \n");
scanf ("%f %f", &n1, &n2);

printf (" 1)n1-n2 o 2)n2-n1 \n");
scanf ("%i", &opc);

switch (opc) {

case 1: {

    z= n1/n2;
    printf ("El resultado es: %f", z);

}break;

case 2: {

    z= n2/n1;
    printf ("El resultado es: %f", z);

} break;

}


}


int main  () {

float a,b;
int opc;

printf ("¿A què programa desea ingresar? \n 1)Suma 2)Resta 3)Multiplicación 4)Divisiòn");
scanf ("%i", &opc);

switch (opc) {

case 1: {

    suma();


}break;

case 2: {

    resta(a,b);
    printf ("El resultado es: %f", resta(a,b));

}break;

case 3: {

    multiplicacion(a,b);
    printf ("El resultado es: %f", multiplicacion(a,b));

}break;

case 4: {

    division(a,b);
    printf ("El resultado es: %f", division(a,b));

}break;

}



}
