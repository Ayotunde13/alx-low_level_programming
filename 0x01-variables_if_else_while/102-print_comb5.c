#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers
 *
 *Return: 0
 **/
int main(void)
{
	int ch;
	int n;

	for (ch = 00 48; ch <= 00 57; ch++)
	{
	for (n = 00 48; n <= 00 57; n++)
	{
	putchar(ch);
	putchar(n);
	if (ch != 57 || n != 57)
	{
	putchar(44);
	putchar(32);
	}
	}
	}

	putchar(10);

	return (0);
}
