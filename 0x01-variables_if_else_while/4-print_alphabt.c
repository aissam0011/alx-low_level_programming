#include <stdio.h>
/**
*main - entry point
*Description : prints the alphabet in lowercase except q and e
*Return: 0 on success
*/
int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase == 'q' || lowercase == 'e')
{
lowercase += 1;
}
else
{
putchar(lowercase);
lowercase += 1;
}
}
putchar('\n');
return (0);
}
