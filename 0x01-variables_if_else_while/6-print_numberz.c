#include <stdio.h>
/**
*main - entry point
*Description : prints all single digit numbers of base 10 starting from 0
*Return: 0 on success
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
