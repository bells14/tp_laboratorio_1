#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "operaciones.h"


int main()
{
    int opcion;
    int a;
    int b;
    char seguir='y';
    int flagA=0;
    int flagB=0;

    do
    {

        system("cls");

        menu(flagA, flagB, a, b);
        printf("Ingrese opcion elegida: ");
        scanf("%d", &opcion);


        switch(opcion)
        {
        case 1:
            a=operandoA();
            flagA=1;
            break;
        case 2:
            if(flagA==1)
            {
                b=operandoB();
                flagB=1;
            }
            else
            {
                printf("No se ingreso el valor de A. Reingrese A:\n");
            }
            system("pause");
            break;
        case 3:
            if(flagA==0 || flagB==0)
            {
                printf("Se necesitan pasar valor de A y B primero antes de calcular\n");
            }
            else
            {
                calcular(a,b);
            }
            system("pause");
            break;
        case 4:
            if(flagA==0 || flagB==0)
            {
                printf("Se necesita calcular para mostrar\n");
            }
            else
            {
                calculos(a,b);
            }
            system("pause");
            break;
        case 5:
            seguir='n';
            break;
        default:
            printf("La opcion ingresada no es valida\n");
            fflush(stdin);
            system("pause");
        }


    }while(seguir=='y');

    return 0;
}
