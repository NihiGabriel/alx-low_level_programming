#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all arguments of 
 * your programm
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that contains arguments or
 * NULL if ac == 0, av == NULL, or upon failure
 */
char *argstostr(int ac, char **av)
{
char *new_str;
int len = 0, i = 0, j, k = 0;
if (ac <= 0 || av == NULL)
return (NULL);
for (; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
len++;
new_str = malloc(len * sizeof(char));
for (i = 0; < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
new_str[k] = av[i][j];
k++;
}
new_str[k] = '\n';
k++;
}
new_str[k] = '\n';
return (new_str);
}
