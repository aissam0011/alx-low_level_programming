#include "main.h"
/**
*is_prime_number - returns 1 if the input integer is a prime number,
*otherwise return 0
*@n: input integer
*@i: iterator
*Return: the result
*/
int actual_prime_number(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (actual_prime_number(n, n - 1));
}
/**
*actual_prime_number - the prime number
*@n: input integer
*@i: iterator
*Return: the result
*/
int actual_prime_number(int n, int i)
{
if (i == 1)
{
return (1);
}
else if (n % i == 0 && i > 0)
{
return (0);
}
else
{
return (actual_prime_number(n, i - 1));
}
}
}
