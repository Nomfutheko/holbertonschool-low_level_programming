#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Print the alphabetic in lower and in upper case
=======
 * main - Prints the alphabetic in lower and upper case
>>>>>>> 6dc2b0df6e0d01a30f9d0fb03e06419d05691536
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

<<<<<<< HEAD
		putchar('\n');
=======
	putchar('\n');
>>>>>>> 6dc2b0df6e0d01a30f9d0fb03e06419d05691536

	return (0);
}
