#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @s: The input string.
 * Return: A pointer to the modiied string.
 */
char *cap_string(char *s)
{
	int new_word = 1;
	int i = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word && isalpha(s[i]) && islower(s[i]))
		{
			s[i] = toupper(s[i]);
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}
	}

	return (s);
}
