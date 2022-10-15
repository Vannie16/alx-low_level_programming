#include <stdio.h>
/**
 * main - prints the size of various data types
 * Return: Always 0 (successful)
 */
int main(void)
{
	printf("Size of a char: %Id bytes(s)\n", sizeof(char));
	printf("Size of an int: %Id byte(s)\n", sizeof(int));
	printf("Size of a long int: %Id byte(s)\n", sizeof(long int));
	printf("Size of a float: %Id byte(s)\n", sizeof(float));
	return (0);
}
