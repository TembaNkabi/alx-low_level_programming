#include "main.h"

/**
 * _strstr - Locating a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: a pointer to the beginning of the located substring
 * null if the sbstring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int a;

if (*needle == 0)
return (haystack);

while (*haystack)
{
a = 0;

if (haystack[a] == needle[a])
{
do {
if (needle[a + 1] == '\0')
return (haystack);

a++;
} while (haystack[a] == needle[a]);
}
haystack++;
}
return ('\0');
}
