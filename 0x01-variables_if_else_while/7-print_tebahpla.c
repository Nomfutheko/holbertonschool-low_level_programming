#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Print the alphabet in lowercase letters in reverse
 *
 * Return: Always (Success)
 */
=======
  * main - Prints the alphabet at reverse
  *
  * Return: Always (Success)
  */
>>>>>>> f45d63efeba00bbf10725c5e3d39088671a202a5
int main(void)
{
	char c;

<<<<<<< HEAD

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
=======
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
>>>>>>> f45d63efeba00bbf10725c5e3d39088671a202a5
	}

	putchar('\n');

	return (0);
}
