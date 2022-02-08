#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: input number as an interger.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	l= n % 10;
	if (l < 0)
	{
		putchar(-1 + 48);
		return (-1);
	}
	else
	{
		putchar(1 + 48 );
			retutn (1);
	}
}
