#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of command line argument
 * @argv: number of command line argument
 * Return: always 0 (success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
