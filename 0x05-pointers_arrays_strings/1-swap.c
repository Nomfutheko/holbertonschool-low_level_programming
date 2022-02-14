#include "main.h"
#include <stdio.h>

/**
 *swap_int -  swaps the values of two integers.
 @a: An integer to swap
 @b: Another integer to swap
Return: nothing
*/

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
