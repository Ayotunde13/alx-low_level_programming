/*
 *File: 1-alphabet.c
 *
 *Auth: Ayotunde Ogunsote
 **/

#include "main.h"

/**
 *main - prints the alphabet in lowercase, followed by a new line.
 *
 *Return - Always 0
 **/
int main(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
}
