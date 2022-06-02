#include <stdio.h>
/**
 * main - where it goes down
 * Printf: print some output
 * Sizeof: check the size of datatype
 * Return: return 0 if success
 */
int main(void)
{
	printf("Size of a char: %l", sizeof(char));
	printf("Size of an int: %l", sizeof(int));
	printf("Size of a long int: %l", sizeof(long));
	printf("Size of a long long int: %l", sizeof(int));
	printf("Size of a float: %l", sizeof(float));
	return (0);
}
