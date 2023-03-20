#include <stdio.h>

/**
 * main - A program that prints the size of variouse computer types
 *
 * Return: always 0 on success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	Printf("Size of a char: %lu  byte(s)\n", (unsigned long) sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
