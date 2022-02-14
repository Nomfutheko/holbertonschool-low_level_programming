#include "main.h"
#include <unistd.h>
/**
 * _Puts - prints a string,to stdout
 * @str: value to be evalueted
 * Return: nothing
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		l++;
	}
	_putchar('\n');
}
