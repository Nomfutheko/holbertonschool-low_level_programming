#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Print the alphabet iin lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 */
=======
* main - Print the alphabet in lowercase letters in reverse
*
* Return: Always 0 (Success)
*/
>>>>>>> 1499b3386c9dea5ebf3639e9488e1bc342e92149
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
