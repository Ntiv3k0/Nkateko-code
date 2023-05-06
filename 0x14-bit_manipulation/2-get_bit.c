#include "main.h"

/**
 * get_bit - at an index in a decimal number, return the value
 * @n: amount of search
 * @index: index of a bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
