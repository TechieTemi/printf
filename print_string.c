#include "main.h"

/**
 * print_string - Function to print a string
 * @str: The string to print
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	unsigned int j, counter = 0;

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
		counter++;
	}
	return (counter);
}
