#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: First String
 * @accept: Second String
 * Return: Pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
