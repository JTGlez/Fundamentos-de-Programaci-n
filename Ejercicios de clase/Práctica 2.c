#include <stdio.h> //Librer�a
#define prueba "esto es una prueba" //Definir o declarar constantes; a prueba le asigna la cadena en comillas
int main ()
{
char cadena [16]="sale la cadena."; //Tipo: caracter. Nombre: cadena (variable). [21] Asignaci�n del m�ximo de caracteres en la cadena.
puts (prueba); //Imprime la variable prueba.
puts ("Escribimos de nuevo."); //Imprime lo escrito entre comillas.
puts (cadena); //Imprime la variable cadena.
puts (&cadena[8]); //Imprime a partir del octavo caracter.
}
