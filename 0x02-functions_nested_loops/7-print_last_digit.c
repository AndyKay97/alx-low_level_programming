#include "main.h"

/**
 * print_last_digit - Prints the last didgit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -2;
	}
	_putchar(last + '0');
	return (last);
}
