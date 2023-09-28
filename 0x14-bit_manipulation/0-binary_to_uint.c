#include "main.h"
/**
 * binary_to_uint -  function to convert a binary number to an unsigned int
 * @b: Pointer to a string numbers
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			decimal = (decimal << 1) | 1;
		else if (*b == '0')
			decimal <<= 1;
		else
			return (0);
		b++;
	}

	return (decimal);
}
