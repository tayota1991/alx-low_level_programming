#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print to STDERR'
 *
 * Return: Always 1 (Success)
*/
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59, 1, stderr);
	return (1);
}

