#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @p: The string will be modified
 *
 * return: cahr var
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && <= 122)
		{
			p[a] -= 32
		}
		a++
	}
	return (p);
}
