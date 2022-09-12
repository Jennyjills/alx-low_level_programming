#include <stdio.h>

/**
 * main -> prints exactly the alphabets in lowercase
 * Return : always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar(10);

return (0);
}
