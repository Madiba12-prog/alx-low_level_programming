#include "main.h"
#include "7-main.c"
/**
* print_last_digit - prints last digit of number
* @n: number being tested
* Return: Always 0.
*/

int print_last_digit(int n)
{
	n = n % 10;
	
	if (n < 0)
	{	n = -n;
		_putchar(n + '0');
		return (n);
	}
}
