#include "main.h"

/**
 * Print_alphabet - Print the alphabet in lowercase.
 *
 * return : void
 */

void print_alphabet(void)
{

	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
