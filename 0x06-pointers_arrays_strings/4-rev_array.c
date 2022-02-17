#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a An array of integers 
 * @n: Number of elements to swap
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = 0;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k , 1 / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
