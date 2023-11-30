#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - func to suim t3wo numbers
 *
 * @a: first number
 * @b: second number
 * Return: sum of the two numbers
 *
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - func to subtrct two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: seconds number
 * Return: the result of multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - func to divide two numbers
 * @a: first numnber
 * @b: the second number
 * Return: the result of division
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - func to determine the modulus
 * @a: the first number
 * @b: the second number
 * Return: the modulo
 */
int op_mod(int a, int b)
{
return (a % b);
}
