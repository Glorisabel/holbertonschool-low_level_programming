#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *int - variable n
 *Return: your program close 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 4)
		printf("%d is a positive number \n",n);
	else
		printf("%d is a negative number \n",n);
	return (0);
}	
