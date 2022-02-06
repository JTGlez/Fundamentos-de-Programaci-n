#include <stdio.h>
int main (){
float n1, n2, n3, mn;
printf ("Introduce 3 n%cmeros", 163);
scanf ("%f %f %f", &n1, &n2, &n3);
mn=n1;

if (mn <n2){
    mn=n2;
    }
if (mn <n3){
    mn=n3;
}

printf ("El mayor es: %f", mn);
return 0;

}
