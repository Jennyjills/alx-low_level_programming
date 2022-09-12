#include <stdio.h>

/**
 * main -> prints exactly the alphabets in lowercase
 * Return : always 0
 */

int main(void)
{
	int ch;
	
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /** this is ascii code for new line) */

	return (0);
}
