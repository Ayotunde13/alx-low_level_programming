#include "main.h"
/**
 *leet - encodes a string into 1337
 *@lt: func para
 *Return: result
 */

char *leet(char *lt)
{
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char num[] = { 4, 3, 0, 7, 1 };
	int a;
	char *r = lt;

	while (*lt)
	{
	for (a = 0; a < 5; a++)
	{
	if (*lt == a[a] || *lt == a[a] - 32)
	{
	*lt = num[a] + '0';
	}
	}
	lt++;
	}

	return (r);
}
