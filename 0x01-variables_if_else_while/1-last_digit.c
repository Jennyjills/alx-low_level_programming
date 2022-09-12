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
printf("last digit of %d is", n);
if (n > 5)
{
	printf("and is greater than 5");
}
if (n == 0)
{
	printf("and is zero");
}
if (n < 6 && n != 0)
{
	printf("and is less than 6 and not 0\n");
}
return (0);
}
