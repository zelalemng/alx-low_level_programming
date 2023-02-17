#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++) {
		putchar(d + '0');
		if (d < 9) {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
