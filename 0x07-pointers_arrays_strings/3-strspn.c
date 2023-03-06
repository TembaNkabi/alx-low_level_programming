#include "main.h"

/**
 * _strspn - Getting the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
i++;
break;
}
else if (accept[a + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
