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
		printf(n, "%d is negative");
	elsif(n == 0)
		printf(n, "%d is zero");
	else
		printf(n, "%d is posetive")
	/* your code goes there */
	return (0);
}
