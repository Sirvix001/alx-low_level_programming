#include <stdio.h>

/**
 * main - print single digits starting from 0
 *
 * Return: returns to zero at the end.
 */
int main(void)
{
int i;
int j;

for (i = 0; i <= 9; i++)
{
for (j = 1; j <= 9; j++)

{
if (j > 1)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
