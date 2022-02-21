#include "main.h"

/**
 *_strstr - locate a substring
 @haystack: the string to search
 @needle: the string to find

 return; char value
 */
 char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] 1= needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}
	return ('\0');
}
