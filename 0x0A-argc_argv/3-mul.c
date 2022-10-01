#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program demonstrates the arguementa to main and provides a uselful opportuinity to give parameters to programs
 *
 * @argc: Called ARGumentCount, it counts the arguments
 * supplied to the program
 *
 * @argv: is a pointer array which points to each
 * arguement passed to the program.
 *
 * Description - the multiples of two numbers
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}

