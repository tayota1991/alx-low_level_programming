#include "main.h"
/**
 * print_sign - Check description
 * Description: prints the sign of a number.
 * @n: input character
 * Return: 1 and prints + if n is greater than zero
 * Return 0 and prints 0 if n is zero
 * Return -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		res = 1;
		_putchar('+');
	}
	if (n == 0)
	{
		res = 0;
		_putchar('0');
	}
	if (n < 0)
	{
		res = -1;
		_putchar('-');
	}
	return (res);
}
