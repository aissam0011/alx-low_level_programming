#include "main.h"
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: input number
*@i: square of input number
*Return: the result
*/
int square(int n, int i);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
*square - recurses to find the natural square root of a number
*@n: input number
*@i: square of input number
*Return: the result
*/
int square(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (square(n, i + 1));
}
}
