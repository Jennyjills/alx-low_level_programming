#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assign a random number to thr variable n each time it is executed
* and print the last digit of the number stored in thr variable n
* Return; is always 0
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf(last digit of %d is %d and is less than 6 and not 0\n", n, last);	
return (0);
}
