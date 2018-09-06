#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

float numero1 (void);
float numero2 (void);
float sumar(float numero1, float numero2);
float restar(float numero1, float numero2);
float dividir(float numero1, float numero2);
float multiplicar(float numero1, float numero2);
float factorialA(float numero1);
float factorialB(float numero2);


int main()
{
    float operando1;
    float operando2;
    int opcion;
    char respuesta='s';
    do
    {

        printf ("------------ CALCULADORA      ---------\n");
        printf ("*  1)INGRESAR PRIMER OPERANDO A %f\n",operando1);
        printf ("*  2)INGRESAR SEGUNDO OPERANDO B %f\n",operando2);
        printf ("*  3)CALCULAR OPERACIONES              *\n");
        printf ("*    SUMAR: A + B            \n");
        printf ("*    RESTAR:  A - B         \n");
        printf ("*    DIVIDIR:  A / B      \n");
        printf ("*    MULTIPLICAR:  A * B \n");
        printf ("*    FACTORIAL:  A! B!    \n");
        printf ("*  4)INFORME DE TODOS LOS RESULTADOS  *\n");
        printf ("*  5)SALIR                            *\n");
        printf ("---------------------------------------\n");


        printf("ELIJA UNA OPCION ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            operando1=numero1();
            break;



        case 2:
            system("cls");
            operando2=numero2();
            break;

        case 3:

            system("cls");
            printf("RESOLVIENDO OPERACIONES... ");
            break;

        case 4:

            system("cls");
            printf("LA SUMA ES: %.2f\n", sumar(operando1,operando2));
            printf("LA RESTA ES: %.2f\n", restar(operando1,operando2));
            dividir(operando1,operando2);
            printf("\nLA MULTIPLICACION ES: %.2f\n", multiplicar(operando1,operando2));
            factorialA(operando1);
            factorialB(operando2);
            break;

        case 5:
            system("cls");
            printf("PRESIONE n PARA SALIR DE LA CALCULADORA");
            break;
        }
        printf("\nPRESIONE s PARA VOLVER AL MENU, n PARA SALIR:");
        fflush(stdin);
        scanf("%c", &respuesta);
        system("cls");
    }
    while(respuesta== 's');

    return 0;
}
