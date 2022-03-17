#include "function_pointers.h"

/**
<<<<<<< HEAD
 * print_name - prints a name
 * @name: The name to prints
 * @f: pointer to the function
 *
 * Return: nothing
 */
=======
  * print_name - Prints a name
  * @name: The name to prints
  * @f: Pointer to function
  *
  * Return: Nothing
  */
>>>>>>> 2cd819e8df99891fdc9885fe81a7eec33f037682
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
