#include "main.h"

/**
 * main- program for printing output
 *
 * Return: returns a 0
 * Description: printing __putchar
 */
int main(void)
{
	int i = 0;
	char c[10] = "_putchar";

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
