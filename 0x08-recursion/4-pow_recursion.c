#include "main.h"
/**
*_pow_recursion - returns the value of x raised to the power of y
*@x: input number
*@y: input number
*Return: 0 on success
*/
int _pow_recursion(int x, int y)
{
int pow;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
pow = x * _pow_recursion(x, y - 1);
return (pow);
}
}
