#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: Always 0 (succes)
 */

int main(void)
{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
		putchar (alp);
		alp++;

	}
	alp = 'A';

	while (alp <= 'Z')
	{
		putchar (alp);
		alp++;
	}

	putchar('\n');
	return (0);

}
