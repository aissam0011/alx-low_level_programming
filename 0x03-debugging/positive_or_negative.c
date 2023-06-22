#include "main.h"
/**
*main - determines if a number is positive, negative or zero
*positive_or_negative : determines if a number is positive, negative or zero
*@i : the number to be checked
* 0 : is the number to be checked
*return: 0 on success
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
