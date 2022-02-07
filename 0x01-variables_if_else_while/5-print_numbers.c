#include <stdio.h>

/**
* main - Print all single digit numbers
*
* Return: Always (Success)
*/
int main(void)
{
	int digit;

	for (digit = '0'; digit <='9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
