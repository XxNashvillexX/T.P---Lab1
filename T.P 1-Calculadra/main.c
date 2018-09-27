#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include "operaciones.h"

double calculadora(char,int,float);

int main()
{
    float numeroUno = 0;
    float numeroDos = 0;                            //declaro las funciones que utilizare
    char opcion;
    float suma, resta, multiplicacion, division;
    int factorial;

    do
    {

        printf("==========================================================================\n");
        printf("||\t\t\tBIENVENIDO A CALCULADORA EN C\t\t\t||\n");
        printf("||\t\t\t\t\t\t\t\t\t||\n");
        printf("||\t\t\tSuma\t\t\tResta\t\t\t||\n");
        printf("||\t\t\t\t\t\t\t\t\t||\n");
        printf("||\t\t\t\tFactorial\t\t\t\t||\n");
        printf("||\t\t\t\t\t\t\t\t\t||\n");
        printf("||\t\t\tMultiplicacion\t\tDivision\t\t||\n");
        printf("||\t\t\t\t\t\t\t\t\t||\n");
        printf("||\t\t\t\t\t\t(T) Finalizar programa\t||\n");
        printf("==========================================================================\n\n");

        printf("\nSeleccione alguna de las cinco operaciones del menu: ");
        setbuf(stdin,NULL);                                                 //en esta area pido los datos que usare en la calculadora
        scanf("%c", &opcion);
        opcion = toupper(opcion);

        switch(opcion)
        {
        case 'S':
            numeroUno= pedirNum("ingrese el primer numero: ");

            numeroDos= pedirNum("\ningrese el segundo numero: ");

            suma= activarSum(numeroUno,numeroDos);
            printf("\n\n%.2f + %.2f = %.2f\n",numeroUno,numeroDos,suma);
            break;                                                             //usando switch indico al programa que hara en cada caso.
        //tambien hago llamada de las funciones de la biblioteca por medio de
        case 'R':                                                           //las variables propias de mi programa.
            numeroUno= pedirNum("ingrese el primer numero: ");
            setbuf(stdin,NULL);
            numeroDos= pedirNum("\ningrese el segundo numero: ");
            setbuf(stdin,NULL);

            resta= activarRes(numeroUno,numeroDos);
            printf("%.2f - %.2f = %.2f\n",(float)numeroUno,(float)numeroDos,(float)resta);
            break;

        case 'M':
            numeroUno= pedirNum("ingrese el primer numero: ");          //ejemplo: en caso de M, utilizo las variables numeroUno y numeroDos
            setbuf(stdin,NULL);                                         //se les asignara valores predeterminados por el usuario.
            numeroDos= pedirNum("\ningrese el segundo numero: ");       //tambien en la mismas variables se hace llamado de la funcion pedirnum
            setbuf(stdin,NULL);                                         //(ingresara un caracter y luego devolvera un dato tipo float)

            multiplicacion= activarMul(numeroUno,numeroDos);                                        //haciendo uso la variable multiplicacion invoco a la funcion activarMul.
            printf("%.2f * %.2f = %.2f\n",(float)numeroUno,(float)numeroDos,(float)multiplicacion); //asignos las variables que usara esa funcion,
            break;                                                                                  //desde activarMul multiplico los valores, retornara el resultado
        //que se alojara en la variable multiplicacion.
        case 'D':                                                                                   //al final se imprimira en la pantalla: los valores de los numeros y su resultado
            numeroUno= pedirNum("ingrese el primer numero: ");
            setbuf(stdin,NULL);
            numeroDos= pedirNum("\ningrese el segundo numero: ");
            setbuf(stdin,NULL);

            division= activarDiv(numeroUno,numeroDos);

            if(numeroDos != 0)
            {
                printf("\n%.2f / %f = %.2f\n",(float)numeroUno,numeroDos,division);
            }
            break;

        case 'F':
            numeroUno= pedirNum("ingrese un numero: ");
            factorial= activarFact(numeroUno);
            printf("\n%f != %d\n",numeroUno, factorial);
            break;

        case 'T':
            printf("\nFinalizando programa\n\n");
            break;

        default:
            printf("\n\nError. Solo se admiten opciones que muestre el menu\n\n");
            break;
        }

        system("pause");
        system("cls");                                              //haciendo aclaraciones, este programa es una funcion de prototipo N°4, devuelve (1) y recibe (1) fatos
        //resumiendo(con propias palabras):
    }
    while(opcion != 'T');
    //PASO 1: recibo datos desde el main
    return 0;                                                       //haciendo uso de las librerias, las invoco desde las variables propias del main
}                                                                   //PASO 2: con los datos, desde las funciones de la biblioteca se realizan las operaciones correspondientes
//luego retorna a las funciones del main, los resultados de las funciones de la biblioteca.
//PASO 3: imprimo a la pantalla, dichos resultados.

