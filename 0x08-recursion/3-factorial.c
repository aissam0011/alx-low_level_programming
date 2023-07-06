#include "main.h"
/**
*factorial - returns the factorial of a given number
*@n: input number
*Return: 0 on success
*/
int factorial(int n)
{
int fac;
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
fac = n * factorial(n - 1);
}
return (fac);
}
