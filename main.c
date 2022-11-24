#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - test file
 * Program starts execution from here
 *
 * Return: 0 (Success)
 */
int main (void)
{
	/* Tests for the printf standard library */
	write(1, "STANDARD:\n", 10);
	printf("Tester\n");

	/* Tests for the custom made printf function */
	write(1, "CUSTOM MADE:\n", 13);
	_printf("Tester\n");

	return (0);
}
