#include <unistd.h>
/**
 * _putchar - write the char c to stdout
 * @c: The charcter to print
 * Return: O success 1.
 * On error, -1 is the returned, and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
