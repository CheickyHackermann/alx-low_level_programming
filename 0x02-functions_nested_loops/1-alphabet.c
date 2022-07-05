#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char alp
	alp = 'a';
	while(alp <= 'z')
		{
			putchar(alp);
			alp ++;
		}
	putchar('\n');

	return (0);
}
