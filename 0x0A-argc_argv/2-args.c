#include <stdio.h>
/**
 * main - used to print all arguments recieved
 * @argc: number of command line arguments
 * @argv: array that contain the command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
