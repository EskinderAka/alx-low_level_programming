/*
 * File : 0-isupper
 * By   : Eskinder Aka
 * Task : 0.isupper
 */

#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 *@c : variable
 * Return: 0 or 1 .
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
