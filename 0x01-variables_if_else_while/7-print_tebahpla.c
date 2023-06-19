#include <stdio.h>
/**
*main - entry point
*Description : prints the lowercase alphabet in reverse
*Return: 0 on success
*/
int main(void)
{
char let;
for (let = 'z'; let >= 'a'; let--)
putchar(let);
putchar('\n');
return (0);
}
