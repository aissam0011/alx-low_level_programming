#include "main.h"
/**
*main - print 10 times the alphabet
*
*Description: 'prints 10 times the alphabet, in lowercase'
*prints 10 times the alphabet, in lowercase
*followed by a new line
*Return: always 0 on success
*/
void print_alphabet_x10(void)
{
char let;
int i;
i = 0;
while (i < 10)
{
for (let = 'a'; let <= 'z'; let++)
{
_putchar(let);
}
_putchar('\n');
i++;
}
}
