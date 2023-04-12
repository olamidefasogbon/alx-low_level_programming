/*
 * Name: Olamide
 * File: 100-get_endianness.c
 * Date: 12th of April, 2023
 */

#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
