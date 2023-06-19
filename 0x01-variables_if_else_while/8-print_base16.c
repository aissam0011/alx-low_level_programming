#include <stdio.h>
/**
*main - entry point
*Description : prints all the numbers of base 16 in lowercase
*Return: 0 on success
*/
int main(void)
{
int num;
char let;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (let = 'a'; let <= 'f'; let++)
putchar(let);
putchar('\n');
return (0);
}
