#include <stdio.h>
#include <string.h>
main () {
int d;
char mensaje[50];
printf ("Teclee un n%cmero\n", 163);
scanf ("%i", &d);
switch (d)
  {case 1:
    strcpy (mensaje, "Lunes");
   break;
   case 2:
    strcpy (mensaje, "Martes");
   break;
   case 3:
    strcpy (mensaje, "Miércoles");
   break;
   case 4:
    strcpy (mensaje, "Jueves");
   break;
   case 5:
    strcpy (mensaje, "Viernes");
   break;
   case 6:
    strcpy (mensaje, "Sábado");
   break;
   case 7:
    strcpy (mensaje, "Domingo");
   break;
   default:
    strcpy (mensaje, "No hay dia para ti :(");
   break;
  }
   printf ("%s", mensaje);
   return 0;
}
