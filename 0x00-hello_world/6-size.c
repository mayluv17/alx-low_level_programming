#include <stdio.h>
/**
 * main - where it goes down
 * Printf: print some output
 * Sizeof: check the size of datatype
 * Return: return 0 if success
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %lu\n", sizeof(float));
	return (0);
}
