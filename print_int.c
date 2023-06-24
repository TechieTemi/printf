#include "main.h"

/**
 * print_int - Helper function to print an integer
 * @n: The integer to print
 * Return: Number of characters printed
 */

int print_int(int n)
{
	unsigned int num, count = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}
	count += print_int_recursive(num);
	return (count);
}
