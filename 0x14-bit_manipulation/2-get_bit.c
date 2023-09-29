#include "main.h"

/**
 * get_bit -  function that returns the value of a bit
 * at a given index
 * @n: the number
 * @index: index at which bit must be found
 * Return: bit value or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
