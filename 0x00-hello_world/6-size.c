#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by rapela
 * Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu by byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu by byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu by byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu by byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu by byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
