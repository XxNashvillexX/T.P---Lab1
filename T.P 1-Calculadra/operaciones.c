#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

//En esta area cree las instrucciones que desarrollan cada una de las funciones de la biblioteca propia.

float pedirNum(char texto[])
{
    float num;
    printf("%s", texto);
    scanf("%f", &num);

    return num;
}

float activarSum(float  numeroA, float  numeroB)    //ejemplo: en esta funcion que tiene dos parametros(numeroA y numeroB)
{
    //se les asignara los valores que ingrese el usuario desde la funcion main.
    float suma;
    suma = numeroA + numeroB;      //aca se desarrollan las instrucciones de la funcion. tiene una variable propia, en ella se suman
                                    //los valores ingresados, que seran alojados en numeroA y numeroB.
    return suma;                    //al final se le indica a la funcion que retorne el valor nuevo de la variable suma.
}

float activarRes(float  numeroA, float  numeroB)
{
    float resta;
    resta = numeroA - numeroB;

    return resta;
}

float activarMul(float  numeroA, float  numeroB)
{
    float multiplacion;
    multiplacion = numeroA * numeroB;

    return multiplacion;
}

float activarDiv(float  numeroA, float  numeroB)
{
    float division;

    if(numeroB == 0)
    {
        printf("\nLa operacion no puede realizarce\n\n");
    }
    else
    {
        division= (float)numeroA / numeroB;
    }

    return division;
}

int activarFact (int numeroA)
{
    int factorial=1;

    if(numeroA<=0)
    {
        printf("\nNo se puede sacar el factorial de un numero negativo o que sea 0\n");
    }
    else
    {
        for(int i=1; i<=(int)numeroA; i++)
        {
            factorial *= i;
        }
    }

    return factorial;
}
