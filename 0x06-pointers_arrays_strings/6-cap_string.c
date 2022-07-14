#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 *cap_string - capitalizes all words of a string
 *@str: func para
 *Return: cap
 */
char *cap_string(char *str)
{
	int i, j = 1;
	char *cap = str;
	char a[] = " \t\n,.!?\"(){}";

	while (*str)
	{
	if (j && *str >= 'a' && *str <= 'z')
	{
	*str -= 32;
	}
	j = 0;
	for (i = 0; i < 12; i++)
	{
	if (*str == a[i])
	{
	j = 1;
	}
	}
	str++;
	}
	return (cap);
}
