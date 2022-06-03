#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main - where is goes down
* Return: return zero is success
* Printf: to print output
*/
int main(void)
{
	int n;
	int l;
	char str[50];
	int l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (l > 5)
	{
		char str[50] = "is greater than 5";
	} else if (l == 0)
	{
		char str[50] = "is 0";
	} else if (n < 6 && n != 0)
	{
		char str[50] = "is less than 6 and not 0";
	} else
	{
	}
		printf("Last digit of %i is %i and %s\n", n, l, str);
		return (0);
}
