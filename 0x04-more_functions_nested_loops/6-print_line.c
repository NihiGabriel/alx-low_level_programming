#include "main.h"
/**
 * print_line - a function that draws a straight line in
 * the terminal. followed by a new line.
 * @n: An input integer
 * Return: nothing.
 */
void print_line(int n)
{
int i = 0;
while (i < n)
{
if (n > 0)
{
_putchar(95);
i += 1;
}
else
_putchar('\n');
}
_putchar('\n');
}
