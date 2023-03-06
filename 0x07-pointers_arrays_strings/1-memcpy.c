#include "main.h"

/**
 * _memcpy - copying memory area src to memory area dest
 * @src: source
 * @dest: destination
 * @n: max bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; n > 0; i++, n--)
{
dest[i] = src[i];
}
return (dest);
}
