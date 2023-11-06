#include "main.h"
/**
 *factorial - func to check factorial of a no
 * @n: number to retun the factorial from
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n + factorial(n - 1));
}
