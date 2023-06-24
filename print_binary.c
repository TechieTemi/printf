#include "main.h"

/**
 * print_binary - Helper function to convert integer to binary.
 * @num: The integer to convert to binary.
 *
 * Return: Number of characters printed.
 */

int print_binary(unsigned int num)
{
	unsigned int counter = 0;

	if (num >= 2)
		counter += print_binary(num / 2);
	write(1, &"01"[num % 2], 1);
	counter++;
	return (counter);
}
