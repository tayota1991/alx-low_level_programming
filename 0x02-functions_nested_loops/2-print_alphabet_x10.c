#include "main.h"

/**
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int y=1;
	char x;

	while (y <= 10)
	{
        for (x = 'a'; x <= 'z'; x++)
                _putchar(x);
        _putchar('\n');
	y++;
	}
}

