#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplie s two numbers
 * @argc: numbe rof command line
 * @argv: the arrray that contains more tha the ..
 * Return: always 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
return (0);
}
