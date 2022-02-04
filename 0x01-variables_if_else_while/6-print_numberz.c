#include <stdio.h>

/**
 *main - Print all single digit nubers using only putchar
 *
 * return: Always 0 (SUcess)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	
	putchar('\n');

	return (0);

}
