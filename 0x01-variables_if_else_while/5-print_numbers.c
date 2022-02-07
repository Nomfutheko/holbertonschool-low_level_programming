#include <stdio.h>

/**
<<<<<<< HEAD
* main - Print all single digit numbers
*
* Return: Always (Success)
*/
=======
  * main - Prints the numbers since 0 to 9
  *
  * Return: Always (Success)
  */
>>>>>>> f45d63efeba00bbf10725c5e3d39088671a202a5
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

<<<<<<< HEAD
	for (digit = '0'; digit <='9'; digit++)
	{
		putchar(digit);
	}

=======
>>>>>>> f45d63efeba00bbf10725c5e3d39088671a202a5
	putchar('\n');

	return (0);
}
