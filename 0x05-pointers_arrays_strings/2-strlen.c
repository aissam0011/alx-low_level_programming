#include "main.h"
/**
*_strlen - function that returns the length of a string
*@s: string
*return: return the length of the string
*/
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
