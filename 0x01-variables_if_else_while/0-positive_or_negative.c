#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
*main - where it goes down
*Printf: print number type
*Return: return 0 if success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	} else
	{
		printf("is zero\n");
	}
	return (0);
}
