#include "main.h"

/**
 * _strchr - Locating a character ina string
 * @s: String to be searched
 * @c: character to be located
 * Return: if c is found, pointer to  the first occurence
 * null if the character is not found
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
