#include <stdio.h>
/**
 * main - Entry point
 *
 * Descreption : A C program that prints with put function
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
