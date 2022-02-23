#include "main.h"

int check_palidrome(char *s);

/**
 * is_palidrome - Returns if a string is a palidrome
 * @s: the string value to bechecked
 *
 * Return: integer value
 */
int is_palidrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palidrome(s));
}

/**
 *
