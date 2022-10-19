#include "main.h"
/**
 * print_last_digit - Check description
 * Description: prints the last digit of a number.
 * @c: input value
 * Return: the value of the last digit
*/
int print_last_digit(int c)
{
	if (c < 0)
	{
	_putchar((-1 * (c % 10)) + '0');
	return (-1 * (c % 10));
	}
	else
	{
	_putchar((c % 10) + '0');
	return (c % 10);
	}
}

