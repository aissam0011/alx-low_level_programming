#include "main.h"
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: input number
*@i: square of input number
*Return: 0 on success
*/
int square(int n, int i);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (square(n, 0));
}
if (i * i == n)
{
return (i);
else if (i * i > n)
{
return (-1);
}
else
return (square(n, i + 1));
}
}
