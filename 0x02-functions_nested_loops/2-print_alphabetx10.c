#include "main.h"

/**
 * Print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * return: Always 0
 */
void print_alphabet_x10(void)
{

	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}