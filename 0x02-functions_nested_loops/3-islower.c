#include "main.h"
/**
 * _islower - Check description
 * Description: It prints the lowercase
 * @c: input character
 * Return: 1 if the alpha is lower and 1 otherwise
*/
int _islower(int c)
{
	char x;
	int lower = 0;

	for (x = 'a'; x <= 'z'; x++)
		if (x == c)
			lower = 1;
	return (lower);
}

