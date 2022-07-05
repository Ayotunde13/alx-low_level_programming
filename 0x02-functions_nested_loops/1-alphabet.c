/*
 *File: 1-alphabet.c
 *
 *Auth: Ayotunde Ogunsote
 **/

#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase, followed by a new line.
 **/
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
}
