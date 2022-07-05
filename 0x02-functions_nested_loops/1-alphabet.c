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
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
}
