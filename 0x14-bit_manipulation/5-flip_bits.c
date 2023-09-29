#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
