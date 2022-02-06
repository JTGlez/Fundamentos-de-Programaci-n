#include <stdio.h>

int main (){

float n1, n2, n3;
printf("Ingrese 2 n%cmeros\n", 163);
scanf ("%f %f", &n1, &n2);

if (n1>100 || n2>100 || n1<-50 ||n2<-50){
            printf ("Fuera del rango");
         }
         else
if (n1<=100 && n1>=-50 && n2<=100 && n1>=-50){

        n3=n1+n2;

         if (n3<0){
            printf ("El resultado es menor a 0");
         }
         else
         if (n3>=0 && n3<=50) {
            printf ("El resultado est%c entre [0,50]", 160);
         }
         else
         {
            printf ("El resultado es mayor a 50");
         }

}
return 0;
}
