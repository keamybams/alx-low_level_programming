#include "main.h"
#include <stdio.h> // Include this header for printf function

char *rot13(char *s)
{
	if (s == NULL)
	return NULL;

	char *p = s;
	char c;

	while ((c = *p))
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			*p = (c - base + 13) % 26 + base;
		}
		p++;
	}

	return s;
}
