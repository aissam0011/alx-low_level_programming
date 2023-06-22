#include <main.h>
/**
*main - determines if a number is positive, negative or zero
*positive_or_negative : determines if a number is positive, negative or zero
*@n : the number to be checked
* 0 : is the number to be checked
*return: 0 on success
*/
void positive_or_negative(int n)
{
if (n < 0)
{
printf("%d is %s\n", n, "negative");
}
else if (n > 0)
{
printf("%d is %s\n", n, "positive");
}
else
{
printf("%d is %s\n", n, "zero");
}
return (0);
}
