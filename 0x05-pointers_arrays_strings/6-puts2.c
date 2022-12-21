#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
