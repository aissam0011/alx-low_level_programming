#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal
*@n: input variable
*Return: void
*/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
for (i = 0; j < i; j++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
