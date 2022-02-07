#include <stdio.h>
/**
 * main - Prints 3 combinations of numbers
 *
 * Return: Always (success)
 */
int main (void)
{
	int c, i, j, k;

	for ( c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if(((k + j) > (c + j) && k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

						if (c + i + k + j == 227 && 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n')

	return (0);
}
