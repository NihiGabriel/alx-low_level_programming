#include "main.h"
/**
 * strint_toupper - a function that changes al lowercase
 * letters of a string to upper case
 * @s: an input string
 * Return: char printer to converted string
 */
char *string_toupper(char *s)
{
char *start = s;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (start);
}