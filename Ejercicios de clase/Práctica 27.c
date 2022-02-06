#include <stdio.h>

int main () {
int D;
float PagoHora, HrSemana, HrDia, SueldoTotal;
HrSemana=0;
PagoHora=145.75;
D=1;
while (D<7) {
printf ("Cuantas horas trabajo el empleado el dia %i ", D);
printf ("? \n");
scanf("%f", &HrDia);
HrSemana=HrSemana+HrDia;
D=D+1;
}
SueldoTotal=HrSemana*PagoHora;
printf ("El trabajador tuvo un total de: %f ", HrSemana);
printf (" horas. \n");
printf ("El sueldo es de $ %f ", SueldoTotal);
return 0;
}
