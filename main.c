#include "factor.h"
/**
 * main - Entry point
 * @ac: argc
 * @av: argv
 * Return: void
 */
int main(int ac, char *av[])
{
	FILE *p;
	size_t ct;
	ssize_t lt;
	char *bf = NULL;


	if (ac != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	p = fopen(av[1], "r");
	if (p == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while ((lt = getline(&bf, &ct, p)) != -1)
	{
		foperation(bf);
	}
	free(bf);

	return (0);
}
