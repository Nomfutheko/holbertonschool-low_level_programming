#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Prints some letters of alphabet
 *
 * return: Always (Success)
 */
int main (void)
=======
  * main - Prints some letters of alphabet
  *
  * Return: Always (Success)
  */
int main(void)
>>>>>>> f45d63efeba00bbf10725c5e3d39088671a202a5
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
