#include <main.h>
 /**
  * jack_baur - prints every minute of the day
  *
  * Return: no return
  */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
						break;
					putchar(a);
					putchar(b);
					putchar(58);
					putchar(c);
					putchar(d);
					putchar('\n');
				}
			}
		}
	}
}
			
