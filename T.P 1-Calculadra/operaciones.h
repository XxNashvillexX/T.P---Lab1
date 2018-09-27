#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED
/** \brief Esta funcion realiza una peticion de dato y devuelve el mismo como resultado
 *
 * \param Se usara un mensaje predeterminado que hara saber lo que debe ingresar el usuario
 * \return Devuelve el dato ingresado, en este caso es un numero
 */

float pedirNum(char[]);

/** \brief activarSum: Se usa para sumar dos variables y devolver un resultado
 *
 * \param Es el primer numero a sumar
 * \param Es el segundo numero a sumar
 * \return Devuelve el la suma entre los dos numeros
 *
 */


float activarSum(float, float);

/** \brief activarRes: Se usa para restar dos variables y devolver un resultado
 *
 * \param Sera el primer numero a restar
 * \param Sera el segundo numero a restar
 * \return Devuelve el resultado de la operacion
 *
 */


float activarRes(float, float);

/** \brief activarRes: Su funcion es multiplicar dos numeros
 *
 * \param Primer numero a multiplicar
 * \param Segundo numero a multiplicar
 * \return Devuelve el producto entre ambos numeros
 *
 */


float activarMul(float, float);

/** \brief Esta funcion logra dividir un numero por otro
 *
 * \param Ocupa el lugar del dividendo
 * \param Ocupa el lugar del divisor
 * \return devuelve el cociente de la operacion
 *
 */


float activarDiv(float, float);

/** \brief Funcion utilizada para obtener el factorial de un numero
 *
 * \param Numero a saber su factorial
 * \return el factorial de dicho numero
 *
 */


int activarFact(int);

#endif // OPERACIONES_H_INCLUDED
