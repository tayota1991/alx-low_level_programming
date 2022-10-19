#include <stdio.h>
#include "main.h"
/**
 * main - Check description
 * Description: prints all natural numbers from n to 98
 * Return: 0
*/
int main(void)
{
	int x;
	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
	if ((x % 3) == 0 || (x % 5) == 0)
		sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
