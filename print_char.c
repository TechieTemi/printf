#include "main.h"

/**
 * print_char - Helper function to print a character
 * @c: The character to print
 * Return: Number of characters printed
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
