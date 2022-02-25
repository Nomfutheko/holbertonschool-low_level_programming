#include "main.h"
#include <sdtio.h>
#include <stdlib.h>
/**
 * main - Prints the munipuljation of two args numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int n = 0, n2 = 0

		if (argc == 3)
		{
			n = atoi(argv[1]);
			n2 = atoi(argv[2]);
			printf("%d\n", n ,n2);
		}
		else
		{
			printf("error\n");
			return (1);
		}

	return (0);
}
