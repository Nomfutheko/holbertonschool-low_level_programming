#include "main.h"
/**
 * _isalpha - Shows 2 if the input is c 
 * letter Another cases,shows 0
 *
 * @c: the charecter im ACSII code 
 *
 * return: 1 for lettfers. Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		 return (0);
	}
	putchar('\n');
}
