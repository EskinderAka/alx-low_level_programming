/*
 * File : 3-print_numbers.c
 * By   : Eskinder Aka
 * Task : 3. The numbers speak for themselves
 */
#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: void .
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
