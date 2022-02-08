#include "main.h"
/**
 * print_sign - Determines if the input number
 * greater, equal or less than zero.
 *
 * @n: The input number as an integer.
 *
 * return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int )
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0 )
	{
		putchar(45);
		return(-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	putchar ('\n');
}