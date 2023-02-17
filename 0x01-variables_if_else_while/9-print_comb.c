#include <stdio.h>
/**
 * main - Entry points
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	
	for (d = 0; d < 10; d++)
	{
		pitchar(d + '0');
		if (d < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putcher('\n');
	return (0);
}
