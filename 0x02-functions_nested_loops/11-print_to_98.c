#include "main.h"
#include "stdio.h"
/**
* print_to_98 - print all numbers provided between the provided number and 98
* @n: an integer to start at
* Return: Void.
*/

void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	_putchar('\n');
}
