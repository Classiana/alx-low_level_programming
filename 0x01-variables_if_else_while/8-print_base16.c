#include <stdio.h>
/**
 * main - main Function
 *
 * Return: 0
 */
int main(void)
{
	char m;
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (m = 'a'; m < 'g'; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
