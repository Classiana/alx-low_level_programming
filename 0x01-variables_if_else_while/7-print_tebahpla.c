#include <stdio.h>
/**
 * main - printing out lowercase letters in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);

	putchar('\n');

	return (0);
}
