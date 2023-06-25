#include "main.h"

/**
 * print_string - Helper function to print a string
 * @str: The string to print
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	unsigned int i, count = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
