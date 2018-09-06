
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

float numero1 (void)
{
    float operando1;
    printf ("INGRESE PRIMER OPERANDO: ");
    scanf("%f", &operando1);

    return operando1;

}


float numero2 (void)
{
    float operando2;
    printf ("INGRESE SEGUNDO OPERANDO: ");
    scanf("%f", &operando2);
    return operando2;
}

float sumar(float numero1, float numero2)
{
    float suma;
    suma=numero1+numero2;
    return suma;
}
float restar(float numero1, float numero2)
{
    float resta;
    resta=numero1-numero2;
    return resta;
}


float dividir(float numero1, float numero2)
{
    float div;

    if(numero2!=0)
    {
        div= numero1/numero2;

        return printf("LA DIVISION ES: %.2f\n",div);

    }
    else
    {
        return printf("NOSE PUEDE DIVIDIR POR 0.\nVUELVE A INGRESAR EL DIVISOR");
    }


}


float multiplicar(float numero1, float numero2)
{
    float multipli;

    multipli=numero1*numero2;
    return multipli;
}


float factorialA(float numero1)
{

    float factor_a=1;

    float i;

    if(numero1>0)
    {

        for(i=1; i<=numero1; i++)
        {
            factor_a=factor_a*i;

        }
        printf("EL FACTOR A! ES: %.2f \n",factor_a);
    }
    else
    {
        return printf("NUMEROS NEGATIVOS NO TIENEN FACTORIAL");
    }
}

float factorialB(float numero2)
{

    float factor_b=1;

    float j;

    if(numero2>0)
    {

        for(j=1; j<=numero2; j++)
        {
            factor_b=factor_b*j;

        }
        printf("EL FACTOR B! ES: %.2f \n",factor_b);
    }
    else
    {
        return printf("NO SE PUEDE SACAR EL FACTORIAL DE 0 Y NUMEROS NEGATIVOS");
    }



}
