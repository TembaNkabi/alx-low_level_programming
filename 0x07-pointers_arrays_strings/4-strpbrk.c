#include "main.h"

/**
 * _strpbrk - Searching a string for a set of bytes
 * @s: string to be saerched
 * @accept: set of bytes to be searched for
 * Return: if a set is matched, a pointer to the matched byte
 * null if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
