#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
<<<<<<< HEAD
			putchar(letter);
	}
	putchar('\n');
=======
		putchar(letter);
		}
		putchar('\n');
>>>>>>> 1499b3386c9dea5ebf3639e9488e1bc342e92149

	return (0);
}
