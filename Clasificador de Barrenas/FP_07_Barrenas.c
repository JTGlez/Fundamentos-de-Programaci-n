/* Universidad Nacional Aut�noma de M�xico (UNAM)
Facultad de Ingenier�a: Fundamentos de Programaci�n - Grupo 07
Proyecto: Selector de Barrenas

Made by Equipo Dinamita:

�	Aguilar P�rez Brenda....................................2
�	Cruz Montero Carlos Enrique.............................9
�	Garc�a Castro Jacob Said................................14
�	Huerta Arriaga Karen....................................19
�	Rodea Gonz�lez Abril Even...............................34
�	T�llez Gonz�lez Jorge Luis..............................39

*/


//Declaraci�n de librer�as:
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Declaraci�n de funciones auxiliares:

leer (FILE *archivo) //Funci�n de apertura e impresi�n de archivos .txt
{
    char caracteres [100];
    while (feof(archivo) == 0)
    {
    fgets (caracteres, 100, archivo);
    printf("%s", caracteres);
    }
    fclose(archivo);
}

//Funci�n principal:

    int main () {

    setlocale(LC_CTYPE,"spanish");
    int opcPrograma, opcReinicio=1;
    while (opcReinicio==1) {

        printf ("Bienvenido, �A qu� programa desea ingresar?\n\n1)Selector de barrenas\n2)Clasificador de barrenas\n\n>Selecci�n: ");
        scanf ("%i", &opcPrograma);

        switch (opcPrograma) {//Selector del programa a correr.

            case 1: {//Selector de Barrenas.

            SelectorDeBarrenas();

            } break; //FIN Selector de Barrenas.

            case 2: {//Clasificador de Barrenas.

            ClasificadorDeBarrenas();

            } break; //FIN Clasificador de Barrenas.

            default: { //Opci�n inv�lida en la selecci�n del programa.

            printf ("\nSeleccion invalida.\n");

            } break; //FIN Opci�n inv�lida.

            }//FIN Switch Selector del programa a correr.

        printf ("\n\n�Desea repetir la ejecuci�n del programa?\n\n1)Si \n2)No\n\n>Selecci�n: ");
        scanf ("%i", &opcReinicio);
        system("cls"); //Limpiador de pantalla.

        } //FIN Repetici�n del programa.

        printf ("\n\nPrograma finalizado con �xito. \n");

    } //FIN Funci�n principal.

    //------------------------------------------------------------------------------------------------------------------------------------------------------

    //Funciones secundarias:

    SelectorDeBarrenas() {

    int opcTerreno, dureza, tiempo, opcBarrena, opcBarrenaNT;

    printf("\n> UNAM Facultad de Ingenier�a \n> Selector de barrenas:\n\nBienvenido, este programa tiene como prop�sito asistir en la selecci�n de barrenas.\n");

    FILE *archivo;
    archivo = fopen("importanciadebarrena.txt", "r"); //ARREGLAR FORMATO
    leer (archivo);

    printf("\n\n�La formaci�n en la que se esta trabajando posee una dureza relativa elevada? \n\n1)Si\n2)No\n\n>Selecci�n: ");
    scanf("%i", &dureza);

    switch (dureza) {

    case 1: {

    printf("\n\n�El trabajo de perforaci�n tiene un tiempo estimado elevado? 1)Si 2)No\n>Selecci�n: ");
    scanf("%i",&tiempo);

        if (tiempo==1) {
            printf("\n\nUsted deberia de considerar una barrena de cortadores fijos: \n\n");
                    FILE *archivo;
                    archivo = fopen("Barrenas de arrastre o cortadores fijos.txt","r");
                    leer (archivo);
                    BarrenaCortadora();
        }

        else

        if (tiempo==2){
        printf("Las Barrenas tric�nicas de serie elevada pueden ser �tiles: \n\n");
                    FILE *archivo;
                    archivo = fopen("Barrenas tric�nicas.txt","r");
                    leer (archivo);
                    BarrenaTriconica();
        }


        } break;

    case 2: {

     printf("\n\n�El trabajo de perforaci�n tiene un tiempo estimado elevado? 1)Si 2)No\n>Selecci�n: ");
     scanf("%i",&tiempo);

        if (tiempo==1) {
        printf("\n\nUsted deberia de considerar una barrena de cortadores fijos: \n\n");
                    FILE *archivo;
                    archivo = fopen("Barrenas de arrastre o cortadores fijos.txt","r");
                    leer (archivo);
                    BarrenaCortadora();
      }

      else

        if (tiempo==2){
        printf("Las Barrenas tric�nicas son ideales para formaciones blandas\n");
                    FILE *archivo;
                    archivo = fopen("Barrenas tric�nicas.txt","r");
                    leer (archivo);
                    BarrenaTriconica();
      }

            } break;

                    } //FIN Switch Dureza

      } //FIN Funci�n principal del Selector de Barrenas.

    //Declaraci�n de funciones secundarias para SelectorDeBarrenas();

     BarrenaTriconica() {

        int superficie, durezaC1, durezabarrenaC1 ,cojineteC1,r;
        r=1;
        while (r==1) {

            printf("\n�La barrena se enfrentar� a una superficie muy abrasiva?\n1)Si\n2)No\n\n");
            scanf ("%i", &superficie);

            switch (superficie) {

            case 1: {
                printf("\nLa barrena de insertos es la indicada:\n\n");

                FILE *archivo;
                archivo = fopen("codigotriconicas.txt","r");
                leer (archivo);

                printf("\n\n�Cual es la dureza de su formacion?\n4)Muy Blanda\n5)Blanda\n6)Media\n7)Dura\n8)Muy dura\nSelecci�n:");
                scanf ("%i", &durezaC1);

                    if(durezaC1==4||durezaC1==5) {

                        printf("\n�Que dureza desea para su barrena?\n1)Suave\n2)Media suave\n3)Media dura\n4)Dura\nSelecci�n:");
                        scanf("%i",&durezabarrenaC1);

                        printf("\n�Que clase de cojinete desea para su barrena?\n1)Rodillo estandar no sellado\n2)Enfriado con arie\n3)Con calibre protegido\n4)Sellado\n5)Sellado con calibre potegido\n6)De friccion sellado\n7)De friccion sellado con calibre protegido\nSelecci�n:");
                        scanf("%i",&cojineteC1);
                    }

                    if(cojineteC1==8||cojineteC1==9||cojineteC1==10) {

                        printf("\nOpci�n Inv�lida. Intente de nuevo\n");
                    }
                    else

                    if(durezaC1==1||durezaC1==2||durezaC1==3) {
                        printf("\nOpci�n Invalida. Intente de nuevo\n");
                    }


                    if (durezaC1==6) {

                        printf("\nLa dureza de su barrena es Media Suave.\n");
                        printf("\n�Que clase de cojinete desea para su barrena?\n1)Rodillo estandar no sellado\n2)Enfriado con aire\n3)Con calibre protegido\n4)Sellado\n5)Sellado con calibre potegido\n6)De friccion sellado\n7)De friccion sellado con calibre protegido\nSelecci�n:");
                        scanf("%i",&cojineteC1);

                    }

                    if (durezaC1==7||durezaC1==8){

                        printf("\n�Que dureza desea para su barrena?\n1)Suave\n2)Media suave\n3)Media dura\n4)Dura\nSelecci�n:");
                        scanf("%i",&durezabarrenaC1);

                        printf("\n�Que clase de cojinete desea para su barrena?\n1)Rodillo estandar no sellado\n2)Enfriado con arie\n3)Con calibre protegido\n4)Sellado\n5)Sellado con calibre potegido\n6)De friccion sellado\n7)De friccion sellado con calibre protegido\nSelecci�n:");
                        scanf("%i",&cojineteC1);

                    }

            //Ingreso a funci�n que dar� el c�digo de la barrena.

                        printf ("\nEl c�digo de la barrena adecuada para sus necesidades es: IADC [%i][%i][%i]\n",durezaC1,durezabarrenaC1,cojineteC1);

        } break;

            case 2: {

                printf("\nLa barrena de dientes es la indicada:\n\n");
                FILE *archivo;
                archivo = fopen("codigotriconicas.txt","r");
                leer (archivo);
                printf("\n\n�Cual es la dureza de su formacion\n1)Blandas\n2)Medias\n3)Duras\nSelecci�n:");
                scanf("%i",&durezaC1);

                    if (durezaC1==1||durezaC1==2||durezaC1==3) {

                    printf("\n�Que dureza desea para su barrena?\n1)Suave\n2)Media suave\n3)Media dura\n4)Dura\nSelecci�n:");
                    scanf("%i",&durezabarrenaC1);

                    printf("\n�Que clase de cojinete desea para su barrena?\n1)Rodillo estandar no sellado\n2)Enfriado con arie\n3)Con calibre protegido\n4)Sellado\n5)Sellado con calibre potegido\n6)De friccion sellado\n7)De friccion sellado con calibre protegido\nSelecci�n:");
                    scanf("%i",&cojineteC1);
                    printf ("\nEl c�digo de la barrena adecuada para sus necesidades es: IADC [%i][%i][%i]\n",durezaC1,durezabarrenaC1,cojineteC1);

                }

            } break;
      }

        printf("\n�Desea ser asesorado de nuevo? 1)Si 2)No\nSeleccion:");
        scanf("%i",&r);

    } //FIN While.




     } //FIN BarreraTriconica();


    BarrenaCortadora () {

    int materialC1, opcAbrasividad, durezaC2, cortadorC3, calibreC3, perfilC4,r;
    r=1;
    while(r==1) {

        printf ("\n\n");
        FILE *archivo;
        archivo = fopen("codigocortadores.txt","r");
        leer (archivo);printf ("\n�Qu� material desea para el cuerpo de la barrena?\n1)Matriz\n2)Acero\n\n>Selecci�n: ");
        scanf ("%i", &materialC1);

          if(materialC1==1) { //Opci�n v�lida en C1.

                printf("\n�La barrena se enfrentar� a una superficie abrasiva?\n1)Si\n2)No\n>Selecci�n:");
                scanf ("%i",&opcAbrasividad); //No abrasiva= PDC Abrasiva= Cortador

                switch (opcAbrasividad) {

                case 1: { //Opci�n v�lida para opcAbrasividad.

                    printf("\nLa barrena a utilizar deber� enfrentarse a una formaci�n de elevada abrasividad. \nPara ello, necesitar� un cortador especial.\n");
                    //archivo txt para mostrar informaci�n de las barrenas de cortadores especiales y su utilidad de superficies abrasivas.
                    printf ("\n�Cu�l es la dureza de su formaci�n?: \n5)Medianamente dura\n6)Dura\n7)Extremadamente dura\n\n>Selecci�n: ");
                    scanf ("%i", &durezaC2);
                    //Texto que muestre cada uno de los cortadores especiales y su informaci�n.


                    if (durezaC2==7)
                    { //Opci�n v�lida en C2.

                    printf ("\n�Qu� clase de cortador desea emplear?: \n1)Diamante natural\n4)Impregnado de diamante\n\n>Selecci�n: ");
                    scanf ("%i", &cortadorC3);

                    if (cortadorC3==1 || cortadorC3==4 )
                    { //Opciones v�lidas para C3.

                        printf ("\n�Cual perfil es el indicado para sus necesidades?:\n1)Plano\n2)Parab�lico corto\n3)Parab�lico medio\n4)Parab�lico largo\n\n>Selecci�n: ");
                        scanf ("%i", &perfilC4);

                        if (perfilC4==1 || perfilC4==2 || perfilC4==3 || perfilC4==4 )

                        {
                            printf ("\nEl c�digo de la barrena adecuada para sus necesidades es: [M][%i][%i][%i]", durezaC2, cortadorC3, perfilC4);

                        }
                        else
                        {//Opci�n inv�lida para C4.

                            printf ("\nSeleccion invalida.\n");

                        }

                    }
                    else { //Opciones inv�lidas para C3.

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if(cortadorC3==1 || cortadorC3==2 || cortadorC3==3 || cortadorC3==4 ||)


                } //FIN if(durezaC2==7).

                    else

                    if (durezaC2==5 ||durezaC2==6){ //Opci�n v�lida en C2.

                            printf ("�\nQu� clase de cortador desea emplear?: \n1)Diamante natural\n2)TSP\n3)H�brido\n\n>Selecci�n: ");
                            scanf ("%i", &cortadorC3);

                    if (cortadorC3==1 || cortadorC3==2 || cortadorC3==3) { //Opciones v�lidas para C3.

                        printf ("\n�Cual perfil es el indicado para sus necesidades?:\n1)Plano\n2)Parab�lico corto\n3)Parab�lico medio\n4)Parab�lico largo\n\n>Selecci�n: ");
                        scanf ("%i", &perfilC4);

                        if (perfilC4==1 || perfilC4==2 || perfilC4==3 || perfilC4==4 ) {

                            printf ("\nEl c�digo de la barrena adecuada para sus necesidades es: [M][%i][%i][%i]", durezaC2, cortadorC3, perfilC4);

                        }
                        else { //Opci�n inv�lida para C4.

                            printf ("\nSeleccion invalida.\n");

                        }

                    }
                    else { //Opciones inv�lidas para C3.

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if(cortadorC3==1 || cortadorC3==2 || cortadorC3==3 || cortadorC3==4 ||)

                    }

                    else {

                        printf ("\nSeleccion invalida.\n");

                    }//FIN if (durezaC2==5 ||durezaC3==6)


                } break; //FIN OPC1.

                case 2: { //Opci�n v�lida para opcAbrasividad.

                    printf ("\nLa barrena a usar debe de poseer preferentemente una pastilla de PDC.\n");


                    printf ("�Cu�l es la dureza de su formaci�n?: \n1)Muy blanda\n2)Blanda\n3)Blanda a media\n4)Media\n\n>Selecci�n: ");
                    scanf ("%i", &durezaC2);

                    if (durezaC2==1 || durezaC2==2 || durezaC2==3 || durezaC2==4) { //Opci�n v�lida en C2.

                    printf ("Seleccione el calibre a usar: \n2)19mm\n3)13mm\n4)8mm\n\n>Selecci�n: ");
                    scanf ("%i", &calibreC3);


                    if (calibreC3==2 || calibreC3==3 || calibreC3==4) { //Opciones v�lidas para C3.

                        printf ("�Cual perfil es el indicado para sus necesidades?:\n1)Plano\n2)Parab�lico corto\n3)Parab�lico medio\n4)Parab�lico largo\n\n>Selecci�n: ");
                        scanf ("%i", &perfilC4);

                        if (perfilC4==1 || perfilC4==2 || perfilC4==3 || perfilC4==4 ) {


                            printf ("\nEl c�digo de la barrena adecuada a sus necesidades es: [M][%i][%i][%i]", durezaC2, calibreC3, perfilC4);


                        }
                        else { //Opci�n inv�lida para C4.

                            printf ("\nSeleccion invalida.\n");

                        }

                    }
                    else { //Opciones inv�lidas para C3.

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if (calibreC3==1 || calibreC3==2 || calibreC3==3)


                    }

                    else {

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if(durezaC2==1 || durezaC2==2 || durezaC3==3 || durezaC4==4)


                } break;

                default: { //Opci�n inv�lida para opcAbrasividad.

                        printf ("\nSeleccion invalida.\n");

                } break;



                }//FIN Switch opcAbrasividad.


            } //FIN if (materialC1==1).

          else

          if(materialC1==2) { //Segunda Opci�n v�lida en C1.

                printf("�La barrena se enfrentar� a una superficie abrasiva?\n1)Si\n2)No\n>Selecci�n:");
                scanf ("%i",&opcAbrasividad); //No abrasiva= PDC Abrasiva= Cortador

                switch (opcAbrasividad) {

                case 1: { //Opci�n v�lida para opcAbrasividad.

                    printf("\nLa barrena a utilizar deber� enfrentarse a una formaci�n de elevada abrasividad. \nPara ello, necesitar� un cortador especial.\n");
                    //archivo txt para mostrar informaci�n de las barrenas de cortadores especiales y su utilidad de superficies abrasivas.
                    printf ("\n�Cu�l es la dureza de su formaci�n?: \n5)Medianamente dura\n6)Dura\n7)Extremadamente dura\n\n>Selecci�n: ");
                    scanf ("%i", &durezaC2);
                    //Texto que muestre cada uno de los cortadores especiales y su informaci�n.


                    if (durezaC2==7) { //Opci�n v�lida en C2.

                    printf ("�Qu� clase de cortador desea emplear?: \n1)Diamante natural\n4)Impregnado de diamante\n\n>Selecci�n: ");
                    scanf ("%i", &cortadorC3);

                    if (cortadorC3==1 || cortadorC3==4 ) { //Opciones v�lidas para C3.

                        printf ("�Cual perfil es el indicado para sus necesidades?:\n1)Plano\n2)Parab�lico corto\n3)Parab�lico medio\n4)Parab�lico largo\n\n>Selecci�n: ");
                        scanf ("%i", &perfilC4);

                        if (perfilC4==1 || perfilC4==2 || perfilC4==3 || perfilC4==4 ) {

                            printf ("\nEl c�digo de la barrena adecuada a sus necesidades es: [S][%i][%i][%i]", durezaC2, cortadorC3, perfilC4);

                        }
                        else { //Opci�n inv�lida para C4.

                            printf ("\nSeleccion invalida.\n");

                        }

                    }
                    else { //Opciones inv�lidas para C3.

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if(cortadorC3==1 || cortadorC3==2 || cortadorC3==3 || cortadorC3==4 ||)


                    } //FIN if(durezaC2==7).
                    else

                    if (durezaC2==5 ||durezaC2==6){ //Opci�n v�lida en C2.

                            printf ("�Qu� clase de cortador desea emplear?: \n1)Diamante natural\n2)TSP\n3)H�brido\n\n>Selecci�n: ");
                            scanf ("%i", &cortadorC3);

                    if (cortadorC3==1 || cortadorC3==2 || cortadorC3==3) { //Opciones v�lidas para C3.

                        printf ("�Cual perfil es el indicado para sus necesidades?:\n1)Plano\n2)Parab�lico corto\n3)Parab�lico medio\n4)Parab�lico largo\n\n>Selecci�n: ");
                        scanf ("%i", &perfilC4);

                        if (perfilC4==1 || perfilC4==2 || perfilC4==3 || perfilC4==4 ) {

                            printf ("\nEl c�digo de la barrena adecuada a sus necesidades es: [S][%i][%i][%i]", durezaC2, cortadorC3, perfilC4);

                        }
                        else { //Opci�n inv�lida para C4.

                            printf ("\nSeleccion invalida.\n");

                        }

                    }
                    else { //Opciones inv�lidas para C3.

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if(cortadorC3==1 || cortadorC3==2 || cortadorC3==3 || cortadorC3==4 ||)

                    }

                    else {

                        printf ("\nSeleccion invalida.\n");

                    }//FIN if (durezaC2==5 ||durezaC3==6)


                } break; //FIN OPC1.

                case 2: { //Opci�n v�lida para opcAbrasividad.

                    printf ("\nLa barrena a usar debe de poseer preferentemente una pastilla de PDC.\n");

                    printf ("�Cu�l es la dureza de su formaci�n?: \n1)Muy blanda\n2)Blanda\n3)Blanda a media\n4)Media\n\n>Selecci�n: ");
                    scanf ("%i", &durezaC2);

                    if (durezaC2==1 || durezaC2==2 || durezaC2==3 || durezaC2==4) { //Opci�n v�lida en C2.

                    printf ("Seleccione el calibre a usar: \n2)19mm\n3)13mm\n4)8mm\n\n>Selecci�n: ");
                    scanf ("%i", &calibreC3);

                    if (calibreC3==2 || calibreC3==3 || calibreC3==4) { //Opciones v�lidas para C3.

                        printf ("�Cual perfil es el indicado para sus necesidades?:\n1)Plano\n2)Parab�lico corto\n3)Parab�lico medio\n4)Parab�lico largo\n\n>Selecci�n: ");
                        scanf ("%i", &perfilC4);

                        if (perfilC4==1 || perfilC4==2 || perfilC4==3 || perfilC4==4 ) {

                            printf ("\nEl c�digo de la barrena adecuada a sus necesidades es: [S][%i][%i][%i]", durezaC2, calibreC3, perfilC4);

                        }
                        else { //Opci�n inv�lida para C4.

                            printf ("\nSeleccion invalida.\n");

                        }

                    }
                    else { //Opciones inv�lidas para C3.

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if (calibreC3==1 || calibreC3==2 || calibreC3==3)


                    }

                    else {

                        printf ("\nSeleccion invalida.\n");

                    } //FIN if(durezaC2==1 || durezaC2==2 || durezaC3==3 || durezaC4==4)


                } break;

                default: { //Opci�n inv�lida para opcAbrasividad.

                        printf ("\nSeleccion invalida.\n");

                } break;



                }//FIN Switch opcAbrasividad.

          }

          else { //Opci�n inv�lida en C1.

            printf ("\nSeleccion invalida.\n");

          }

    printf("\n\n�Desea ser asesorado de nuevo? \n\n1)Si\n2)No\n\n>Seleccion: ");
    scanf("%i",&r);
    }


    }


    //FIN Declaraci�n de funciones secundarias para SelectorDeBarrenas();

    //------------------------------------------------------------------------------------------------------------------------------------------------------

    ClasificadorDeBarrenas() { //Es de m�s de 8000 *Vegeta voice playing*.

    int regreso=1, opcBarrena;
    while (regreso==1) {

    printf("\n> UNAM Facultad de Ingenier�a \n> Clasificador de barrenas:\n\nBienvenido, este programa tiene como prop�sito determinar las caracter�sticas de la barrena ingresa e informaci�n esencial acerca de su utilidad sobre diferentes superficies sedimentarias.\n");

    printf("\n�Qu� clase de barrena desea introducir? \n\n1)Tric�nica \n2)Cortador/De arrastre\n\n>Selecci�n: ");
    scanf ("%i", &opcBarrena);

    switch (opcBarrena) {

        case 1: {

            BibliotecaTriconica();

        } break;

        case 2: {

            BibliotecaCortadores();

        } break;

        default: {

            printf ("\nSeleccion invalida.\n");

        } break;


    } //FIN Switch

    printf ("\n\n�Desea reiniciar el programa?\n\n1)Si \n2)No\n\n>Selecci�n: ");
    scanf ("%i", &regreso);
    system("cls");

    } //FIN While

    printf ("\n\nPrograma finalizado con �xito. \n");

    } //FIN ClasificadorDeBarrenas();


    //Declaraci�n de funciones secundarias para ClasificadorDeBarrenas();

    BibliotecaTriconica() {

        int Triconica[3], i, C1, C2, C3;
    char TipodeBarrena[200];

    printf (">Ingrese el c�digo IADC de la barrena tric�nica. \n\n");

    for (i=0; i<3; i++) {

    printf ("Caracter %i: ", i+1);
    scanf ("%i", &Triconica[i]);

    }

    C1=Triconica[0];
    C2=Triconica[1];
    C3=Triconica[2];

    printf ("\n\nBarrena ingresada: IADC [%i][%i][%i] \n\nCaracter�sticas de la barrena: ", C1, C2, C3);

    FuncionCaracterT (C1, C2, C3);

    printf ("\n\n\n>A continuaci�n encontrar� informaci�n �til sobre las diferentes superficies sedimentarias y las barrenas indicadas para cada escenario: \n\n");
    FILE *archivo;
    archivo = fopen("superficies sedimentarias.txt","r");
    leer (archivo);
}

FuncionCaracterT (int C1, int C2, int C3) {

    char TipodeBarrena[200]="0";
    char Dientes[200]="Barrena tric�nica de dientes de acero";
    char Insertos[200]="Barrena tric�nica de insertos de carburo de tungsteno(TCI)";

    char DurezadeBarrena[50]="0";
    char Suave[50]=" con una dureza suave";
    char MediaSuave[50]=" con una dureza media suave";
    char MediaDura[50]=" con una dureza media dura";
    char Dura[50]=" con una dureza dura";

    char CategoriadeBarrena[50]="0";
    char RodilloNoSellado[50]=" y un cojinete de rodillo est�ndar no sellado.";
    char RodilloEnfriado[50]=" y un cojinete de rodillo enfriado con aire.";
    char RodilloCalibre[50]=" y un cojinete de rodillo con calibre protegido.";
    char RodilloSellado[50]=" y un cojinete de rodillo sellado.";
    char RodilloSelladoCalibre[100]=" y un cojinete de rodillo sellado con calibre protegido.";
    char RodilloFriccionSellado[50]=" y un cojinete de fricci�n sellado.";
    char RodilloFriccionSelladoCalibre[100]=" y un cojinete de fricci�n sellado con calibre protegido.";

    switch (C1) { //Validaci�n en C1.

        case 1: { //Formaci�nes blandas - Dientes

            switch (C2) { //Validaci�n en C2.

                case 1: { //Dureza suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.



                } break;

                case 2: { //Dureza media suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 3: { //Dureza media dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 4: { //Dureza dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



            } //FIN Validaci�n en C2.








        } break;

        case 2: { //Formaciones medias - Dientes

            switch (C2) { //Validaci�n en C2.

                case 1: { //Dureza suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.



                } break;

                case 2: { //Dureza media suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 3: { //Dureza media dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 4: { //Dureza dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



            } //FIN Validaci�n en C2.

        } break;

        case 3: { //Formaciones duras - Dientes

            switch (C2) { //Validaci�n en C2.

                case 1: { //Dureza suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.



                } break;

                case 2: { //Dureza media suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 3: { //Dureza media dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 4: { //Dureza dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Dientes);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;

            } //FIN Validaci�n en C2.

        } break;

        case 4: { //Formaciones Muy blandas - Insertos

            switch (C2) { //Validaci�n en C2.

                case 1: { //Dureza suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.



                } break;

                case 2: { //Dureza media suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.

                } break;

                case 3: { //Dureza media dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validaci�n en C3.

                } break;

                case 4: { //Dureza dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



            } //FIN Validaci�n en C2.


        } break;


        case 5: { //Formaciones blandas - Insertos

            switch (C2) { //Validaci�n en C2.

                case 1: { //Dureza suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validaci�n en C3.


                } break;

                case 2: { //Dureza media suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validaci�n en C3.

                } break;

                case 3: { //Dureza media dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validaci�n en C3.

                } break;

                case 4: { //Dureza dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validaci�n en C3.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;


            } //FIN Validaci�n en C2.

        } break;

        case 6: { //Formaciones medias - Insertos

            switch (C2) { //Validaci�n en C2.

                case 1: {

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.


                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;

            }


        } break;

        case 7: { //Formaciones duras - Insertos

            switch (C2) { //Validaci�n en C2.

                case 1: { //Dureza suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.



                } break;

                case 2: { //Dureza media suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 3: { //Dureza media dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;



                    } //FIN Validaci�n en C3.

                } break;

                case 4: { //Dureza dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;

            } //FIN Validaci�n en C2.

        } break;

        case 8: { //Formaciones muy duras - Insertos

            switch (C2) { //Validaci�n en C2.

                case 1: { //Dureza suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Suave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.

                } break;

                case 2: { //Dureza media suave

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaSuave);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.

                } break;

                case 3: { //Dureza media dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, MediaDura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.

                } break;

                case 4: { //Dureza dura

                    switch (C3) { //Validaci�n en C3.

                        case 1: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloNoSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 2: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloEnfriado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 3: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);


                        } break;

                        case 4: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 5: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 6: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSellado);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        case 7: {

                            strcpy (TipodeBarrena, Insertos);
                            strcpy (DurezadeBarrena, Dura);
                            strcpy (CategoriadeBarrena, RodilloFriccionSelladoCalibre);
                            printf ("%s", TipodeBarrena);
                            printf ("%s", DurezadeBarrena);
                            printf ("%s", CategoriadeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;

                    } //FIN Validaci�n en C3.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;

            } //FIN Validaci�n en C2.

        } break;

        default: {
            printf ("\nSeleccion invalida.\n");
        } break;

    } //FIN Validaci�n en C1.



    } //FIN BibliotecaTriconica

    BibliotecaCortadores () {

        int Cortadora[4], i, C1, C2, C3, C4;
    char TipodeBarrena[200];

    printf (">Ingrese el c�digo IADC de la barrena cortadora. \n\n");

    for (i=0; i<4; i++) {

    printf ("Caracter %i: ", i+1);
    scanf ("%i", &Cortadora[i]);

    }

    C1=Cortadora[0];
    C2=Cortadora[1];
    C3=Cortadora[2];
    C4=Cortadora[3];

    if (C1==1) {

        printf ("\n\nBarrena ingresada: IADC [M][%i][%i][%i] \n\nCaracter�sticas de la barrena: ", C1, C2, C3, C4);

    }

    else {

        printf ("\n\nBarrena ingresada: IADC [S][%i][%i][%i] \n\nCaracter�sticas de la barrena: ", C1, C2, C3, C4);

    }



    FuncionCaracterC (C1, C2, C3, C4);

    printf ("\n\n\n>A continuaci�n encontrar� informaci�n �til sobre las diferentes superficies sedimentarias y las barrenas indicadas para cada escenario: \n\n");
    FILE *archivo;
    archivo = fopen("superficies sedimentarias.txt","r");
    leer (archivo);

    }




    FuncionCaracterC (int C1, int C2, int C3, int C4) {

    char CuerpodeBarrena[200]="0";
    char Matriz[200]="Barrena cortadora de matriz";
    char Acero[200]="Barrena cortadora de acero";

    char FormaciondeBarrena[50]="0";
    char MuyBlanda[100]=" especializada para formaciones muy blandas";
    char Blanda[50]=" especializada para formaciones blandas";
    char BlandaMedia[100]=" especializada para formaciones blandas a medias";
    char Media[100]=" especializada para formaciones de dureza media";
    char MediaDura[100]=" especializada para formaciones medianamente duras";
    char Dura[50]=" especializada para formaciones duras";
    char MuyDura[100]=" especializada para formaciones extremadamente duras";

    char TamanodeBarrena[50]="0";
    char PDC19mm[50]=" de PDC - 19mm";
    char PDC13mm[50]=" de PDC - 13mm";
    char PDC8mm[50]=" de PDC - 8mm";
    char DiamanteNatural[50]=" compuesta de diamante natural";
    char TSP[100]=" compuesta de TSP";
    char Hibrido[50]=" de tipo h�brida";
    char ImpregnadaDiamante[100]=" completamente impregnada de diamante";

    char PerfildeBarrena [50]="0";
    char PerfilPlano[50]=" y con un perfil plano.";
    char PerfilParabolicoCorto[100]=" y con un perfil parab�lico corto.";
    char PerfilParabolicoMedio[100]=" y con un perfil parab�lico medio.";
    char PerfilParabolicoLargo[100]=" y con un perfil parab�lico largo.";


    switch (C1) { //Validador de C1.

    case 1: { //Cuerpo de matriz.

        switch (C2) { //Validador de C2.

            case  1: { //Formaci�n muy blanda

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.

            } break;

            case 2: { //Formaci�n blanda

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.




            } break;

            case 3: { //Formaci�n Blanda a Media.

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.




            } break;

            case 4: { //Formaci�n Media

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.


            } break;

            case 5: { //Formaci�n Medianamente Dura

                switch (C3) { //Validador para C3.

                    case 1: { //Diamante natural.

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.






                    } break;

                    case 2: { //TSP

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    case 3: { //H�brido-Combinaci�n

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    default: {

                        printf ("\nSeleccion invalida.\n");

                    } break;


                } //FIN Validador para C3.





            } break;

            case 6: { //Formaci�n Dura

                switch (C3) { //Validador para C3.

                    case 1: { //Diamante natural.

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.






                    } break;

                    case 2: { //TSP

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    case 3: { //H�brido-Combinaci�n

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    default: {

                        printf ("\nSeleccion invalida.\n");

                    } break;


                } //FIN Validador para C3.


            } break;

            case 7: { //Formaci�n Extremadamente Dura

                switch (C3) { //Validador de C3.

                    case 1: { //Diamante Natural

                        switch (C4) { //Validador de C4.

                            case 1: { //Perfil plano

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 2: { //Perfil parab�lico corto

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil parab�lico medio

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil parab�lico largo

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default:{

                                printf ("\nSeleccion invalida.\n");

                            } break;


                        } //FIN Validador de C4.





                    } break;

                    case 4: { //Impregnada de diamante

                        switch (C4) { //Validador de C4.

                            case 1: { //Perfil plano

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 2: { //Perfil parab�lico corto

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil parab�lico medio

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil parab�lico largo

                                strcpy (CuerpodeBarrena, Matriz);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default:{

                                printf ("\nSeleccion invalida.\n");

                            } break;


                        } //FIN Validador de C4.



                    } break;

                    default: {


                        printf ("\nSeleccion invalida.\n");


                    } break;


                } //FIN Validador de C3.







            } break;

            default: {

                printf ("\nSeleccion invalida.\n");

            }


        } //FIN Validador de C2.




    } break;

    case 2: { //Cuerpo de acero.

        switch (C2) { //Validador de C2.

            case  1: { //Formaci�n muy blanda

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyBlanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.

            } break;

            case 2: { //Formaci�n blanda

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Blanda);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.




            } break;

            case 3: { //Formaci�n Blanda a Media.

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, BlandaMedia);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.




            } break;

            case 4: { //Formaci�n Media

                switch (C3) { //Validador de C3.

                case 2: { //PDC 19mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC19mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 3: { //PDC 13mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC13mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                case 4: { //PDC 8mm

                    switch (C4) {

                        case 1: { //(Perfil plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 2: { //Perfil Parab�lico corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Media);
                                    strcpy (TamanodeBarrena, PDC8mm);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                        } break;

                        default: {

                             printf ("\nSeleccion invalida.\n");

                        } break;


                    } //FIN Validador de C4.

                } break;

                default: {

                    printf ("\nSeleccion invalida.\n");

                } break;



                } //FIN Validador de C3.


            } break;

            case 5: { //Formaci�n Medianamente Dura

                switch (C3) { //Validador para C3.

                    case 1: { //Diamante natural.

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.






                    } break;

                    case 2: { //TSP

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    case 3: { //H�brido-Combinaci�n

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MediaDura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    default: {

                        printf ("\nSeleccion invalida.\n");

                    } break;


                } //FIN Validador para C3.





            } break;

            case 6: { //Formaci�n Dura

                switch (C3) { //Validador para C3.

                    case 1: { //Diamante natural.

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.






                    } break;

                    case 2: { //TSP

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, TSP);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    case 3: { //H�brido-Combinaci�n

                        switch (C4) { //Validador para C4.

                            case 1: { //Perfil Plano

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);


                            } break;

                            case 2: { //Perfil Parab�lico Corto

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil Parab�lico Medio

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil Parab�lico Largo

                                    strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, Dura);
                                    strcpy (TamanodeBarrena, Hibrido);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default: {

                                printf ("\nSeleccion invalida.\n");

                            } break;



                        } //FIN Validador para C4.

                    } break;

                    default: {

                        printf ("\nSeleccion invalida.\n");

                    } break;


                } //FIN Validador para C3.


            } break;

            case 7: { //Formaci�n Extremadamente Dura

                switch (C3) { //Validador de C3.

                    case 1: { //Diamante Natural

                        switch (C4) { //Validador de C4.

                            case 1: { //Perfil plano

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 2: { //Perfil parab�lico corto

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil parab�lico medio

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil parab�lico largo

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, DiamanteNatural);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default:{

                                printf ("\nSeleccion invalida.\n");

                            } break;


                        } //FIN Validador de C4.





                    } break;

                    case 4: { //Impregnada de diamante

                        switch (C4) { //Validador de C4.

                            case 1: { //Perfil plano

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilPlano);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 2: { //Perfil parab�lico corto

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilParabolicoCorto);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 3: { //Perfil parab�lico medio

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilParabolicoMedio);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            case 4: { //Perfil parab�lico largo

                                strcpy (CuerpodeBarrena, Acero);
                                    strcpy (FormaciondeBarrena, MuyDura);
                                    strcpy (TamanodeBarrena, ImpregnadaDiamante);
                                    strcpy (PerfildeBarrena, PerfilParabolicoLargo);
                                    printf ("%s", CuerpodeBarrena);
                                    printf ("%s", FormaciondeBarrena);
                                    printf ("%s", TamanodeBarrena);
                                    printf ("%s", PerfildeBarrena);

                            } break;

                            default:{

                                printf ("\nSeleccion invalida.\n");

                            } break;


                        } //FIN Validador de C4.



                    } break;

                    default: {


                        printf ("\nSeleccion invalida.\n");


                    } break;


                } //FIN Validador de C3.







            } break;

            default: {

                printf ("\nSeleccion invalida.\n");

            }


        } //FIN Validador de C2.






    } break;

    default: {

        printf ("\nSeleccion invalida.\n");

    } break;


    } //FIN Validador de C1.



    }

    //FIN Declaraci�n de funciones secundarias para ClasificadorDeBarrenas(); :)













