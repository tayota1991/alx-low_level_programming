#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Description: 'putchar function'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		putchar(x);
	}
	putchar('\n');

	return (0);
}
