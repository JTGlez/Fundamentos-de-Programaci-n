#include <stdio.h>

int main () {

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




return 0;
}
