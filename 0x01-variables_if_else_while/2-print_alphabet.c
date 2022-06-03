#include <stdio.h>
/**
 * main - where it all started
 * Putchar: Print some char
 * Return: return 0 if success
 * */

int main (void)
{	
	char i;

	for (i = "a"; i <= "z"; i++)
	{
		putchar (i);
	}
	putchar("\n");
	return (0);
}
