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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' && alphabet == 'e')
			continue;
		else
			putchar (alphabet);
	}

	putchar ('\n');
	return (0);
}
