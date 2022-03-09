#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - ..
 * @argc: ...
 * @argv: ...
 *
 * return: ...
 */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int val = 0, i = 0;

	if (argc == 2)
	{
		val = atoi(argv[1]);

		if (val < 0)
		{
			printf("error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input _buffer(&ud_obj, argv[1], val);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t&s\n", ud insn_hex(&ud_obj));
		}
	}

	return (0);
}