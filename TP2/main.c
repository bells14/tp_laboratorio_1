#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funcionesTP2.h"

char menu();


int main()
{
    int opcion;
    int flag=0;
    char seguir = 's';
    char confirma;

    do
    {
        switch(menu())
        {

        case 'a':


            break;
        case 'b':


            break;
        case 'c':

            break;
        case 'd':


            break;
        case 'e':


            break;
        case 'f':

            break;


        case 'g':
            printf("Confirma salida?: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
            if(confirma == 's')
            {
                seguir = 'n';
            }

            break;
        default:
            printf("Opcion invalida!!!\n");

        }

        system("pause");

    }
    while( seguir == 's');


    return 0;
}


char menu()
{
    char opcion;
    system("cls");

    printf("*** ABM Personas ***\n\n");
    printf("a Altas\n");
    printf("b Bajas\n");
    printf("c Modificacion\n");
    printf("d Listar\n");
    printf("e Ordenar\n");
    printf("f Informes\n");
    printf("g Salir\n\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    opcion = tolower(getchar());

    return opcion;
}

