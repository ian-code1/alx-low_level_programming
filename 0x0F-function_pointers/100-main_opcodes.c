#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - print opcodes of the program
 * @a: the address of the min function
 * @n: the umber of bytes to print
 * Return:we are returning void
 */
void print_opcodes(char *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
	printf(" ");
}
printf("\n");
}
/**
 * main - print the epicodes of its own function
 * @argv: argument count
 * @argc: argument counter
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int n;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);
return  (0);
}
