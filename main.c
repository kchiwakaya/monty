#include "monty.h"
/**
 * main-entry point for monty
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: Always zero
 */
int main(int argc, char **argv)
{
	File *file;
	char *data = NULL;
	ssize_t rdline = 0;
	size_t length = 0;

	if (argc < 2)||(file == NULL)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	/**if can't open file*/
	if (!file)
	{
		fprintf(stderr,"Error: Can't open file <%s>\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	/**If file contains invalid instruction*/
	print("L<line_number>: unknown instruction <opcode>");
	exit(EXIT_FAILURE);
	/**run program until all instructions are executed*/
	do{
		read_line = getline(&data, &length, file);
		if (read_line > 0)
		{
			execute(data, &stack, counter, file);
		}
		free(content);
	}while (rdline > 0)
	return (0);
}
