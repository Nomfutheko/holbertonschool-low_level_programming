#include "main.h"
/**
 * times_table - that prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		putchar(48);
		for (b = 1; b <=9; b++)
		{
			c = a * b;
			putchar(44);
			putchar(32);
			if (c <= 9)
			{
				putchar(32);
				putchar(c + 48);
			}
			else
			{
				putchar((c / 10) + 48 );
				putchar((c % 10)+ 48 );
			}
		}
		putchar('\n');
	}
}
