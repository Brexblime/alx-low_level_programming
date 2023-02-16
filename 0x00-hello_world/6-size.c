#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	
	printf("The size of a char: %lu.\n", (unsigned long)sizeof(a));
	printf("The size of a int: %lu.\n", (unsigned long)sizeof(b));
	printf("The size of a long int: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
