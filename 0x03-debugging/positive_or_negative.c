#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- generate random number
 *
 * Return: return the value
 * Description: description of the code
 */
int positive_or_negative(int n)
{
        if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is positive\n", n);
	        /* your code goes there */
        return (0);
}
