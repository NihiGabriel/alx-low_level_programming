#include "main.h"
/**
 * _strncpy - a function that copys the string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int srclen = 0, i = 0;
char *temp = dest, *start = src;
while (*src)
{
srclen++;
src++;
}
srclen++;
if (n > srclen)
n = srclen;
src = start;
for (; i < np; i++)
*dest++ = *src++;
return (temp);
}
