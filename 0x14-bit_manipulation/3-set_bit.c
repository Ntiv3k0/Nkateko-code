#include "main.h"

/**
 * set_bit - the given index should be set to 1 by the bit
 * @n: number to change pointerb by to the number
 * @index: index to the bit is set to 1
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
