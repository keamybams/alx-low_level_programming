#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	if (s == NULL)
	return (NULL);

	char *p = s;

	while (*p)
	{
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			if ((*p >= 'a' && *p <= 'z') && *p + 13 > 'z')
				*p = *p - 13;
			else if ((*p >= 'A' && *p <= 'Z') && *p + 13 > 'Z')
				*p = *p - 13;
			else
				*p = *p + 13;
		}
		p++;
	}

	return (s);
}
