#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * Return: On success 0.
*/
int _putchar(char x)
{
	return (write(0, &x, 1));
}
