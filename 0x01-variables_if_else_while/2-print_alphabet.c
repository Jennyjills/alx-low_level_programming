#include <stdio.h>

/**
 * main -> prints the alphabets in lowercase
 * Return : always zero
 * /
int main(void)
{
        int ch;
        for (ch = 97; ch <= 122; ch++)
        {
            putchar(ch);
        }
        putchar(10); /* this is ascii code for new line)

        return (0);
}
