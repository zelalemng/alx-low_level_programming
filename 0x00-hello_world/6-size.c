#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("\nSize of a char: %zu byte(s)", sizeof(a));
printf("\nSize of an int: %zu byte(s)", sizeof(b));
printf("\nSize of a long int: %zu byte(s)", sizeof(c));
printf("\nSize of along long int: %zu byte(s)", sizeof(d));
printf("Size of a float: %zu byte(s)", sizeof(f));
return (0);
}
