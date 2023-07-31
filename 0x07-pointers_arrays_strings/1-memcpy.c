#include "main.h"

/**
 * _memcpy - Copies n bytes from source address to destination address
 * @dest: The destination address
 * @src: The source address
 * @n: Number of bytes to be copied
 * Return: Pointer to the destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_adr = dest;
	char *src_adr = src;

	while (n > 0)
	{
		*dest_adr = *src_adr;
		dest_adr++;
		src_adr++;
		n--;
	}
	return (dest);
}
