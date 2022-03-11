#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- generate random number
 *
 * Return: return the value
 * Description: description of the code
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar (i);
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
