#include "main.h"
/**
 *print_rev - take the string from function
 *@s: value taken from main
 * Return: ALways 0.
 */
int print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len++)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
