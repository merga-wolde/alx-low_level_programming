#include <stdlib.h>
#include <time.h>
/**
 * main- generate random number
 *
 * Return: return the value
 * Description: description of the code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative" , n);
	else if(n == 0)
		printf("%d is zero", n);
	else
		printf("%d is posetive", n);
	/* your code goes there */
	return (0);
}
