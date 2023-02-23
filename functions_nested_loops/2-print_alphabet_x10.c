#include "main.h"

/**
 * print_alphabet - x10 lower case
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

	int abc = 9, m;
	char case;
{
	for (m = 0; m<= abc; m++)
	{
	for (case = 'a'; case <= 'z'; case++)

	    _putchar(case);
	    _putchar('\n');
	}
}
