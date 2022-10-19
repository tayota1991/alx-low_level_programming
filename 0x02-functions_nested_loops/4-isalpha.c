#include "main.h"
/**
 * _isalpha - Check description
 * Description: It checks for alphabetic
 * @c: input character
 * Return: 1 if the alpha is char and 0 otherwise
*/
int _isalpha(int c)
{
	char x;
	char y;
	int alpha = 0;

	for (x = 'a'; x <= 'z'; x++)
	for (y = 'A'; y <= 'Z'; y++)
		if (x == c || y == c)
		alpha = 1;
	return (alpha);
}

