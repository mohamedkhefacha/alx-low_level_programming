#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	num = 'z';
	while (num >= 'a')
	{
		putchar(num);
		num--;
	}
	putchar('\n');

	return (0);
}
