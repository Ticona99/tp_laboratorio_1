#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED


float numero1(void);
/**\brief Pide un numero al usuario y retorna un numero.
 * \return retorna el primer operando
 */

float numero2(void);
/**\brief pide y retorna segundo numero al usuario
 * \return retorna el segunto operando
 */

float sumar( float operando1,float  operando2);
/**\brief recibe dos numeros y realiza suma de ambos numeros
 *\param operando1 y operando2 corresponden a los numeros de la suma
 * \return retorna la suma de ambos numeros.
 */

float restar( float operando1,float  operando2);
/**\brief recibe dos numeros y realiza la resta de ambos.
 *\param operando1 y operando2 que corresponde a los numeros de la resta.
 * \return retorna la resta de ambos numeros.
 */

float dividir( float operando1,float  operando2);
/**\brief recibe dos numeros y realiza  la division.
 *\param operador1 y operador2 que corresponde a los numeros.
 * \return retorna la
 */

float multiplicar( float operando1,float  operando2);
/**\brief recibe dos numeros flotantes
 *\param los multiplica
 * \return la mutiplicacion.
 */
float factorial_a( float operando1);
/**\brief recibe primer numero y realiza su factorial.
 *\param operando1 que corresponde al numero.
 * \return su factorial.
 */

float factorial_b( float operando2);
/**\brief recibe segundo numero y realiza su factorial
 *\param operando2 que corresponde al numero segundo
 * \return su factorial.
 */


#endif // BIBLIOTECA_H_INCLUDED
