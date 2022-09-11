#include <stdio.h>

/*
 * main - Entry point
 *
 * return - Return 0 (Success)
 *
 */
int main(void)
{
	char LowercaseAlphabets = 'a';

	while (LowercaseAlphabets <= 'z')
	{
	putchar (LowercaseAlphabets);
	LowercaseAlphabets++;
	}
	putchar('\n');

	return (0);
}
