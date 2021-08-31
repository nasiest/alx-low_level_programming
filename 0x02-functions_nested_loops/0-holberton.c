#include "main.h"

/**
 * main - It prints the word _putchar, followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	char word[10] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
