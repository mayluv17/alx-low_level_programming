#include <stdio.h>
/**
 * main - where it all started
 * Putchar: Print some char
 * Return: return 0 if success
 */

int main(void)
{
        char i;
	char b;
        for (i = 'a'; i <= 'z'; i++)
        {
                putchar (i);
        }
	for (b = 'A'; b <= 'Z'; b++)
        {
                putchar (b);
        }
        putchar('\n');
        return (0);
}
