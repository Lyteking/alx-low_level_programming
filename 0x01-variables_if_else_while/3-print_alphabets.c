#include <stdio.h>

/*
 * main - prints lowercase and uppercase a-zA-z using putchar
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*prints lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z') /*prints uppercases A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}
