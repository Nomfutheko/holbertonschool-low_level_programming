#include "main.h"

/**
_print_rev_recussion - print a string in reverse
@s: the string to reverse

Return : nothing
*/
void _Print_rev_recusion(char *s)
{
if (*s == '\0')
{
return;
}

s++;
_print_rev_recusion(s);
s--;
_putchar(*s);
}
