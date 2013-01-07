/**
 * A simple program which sums all of the even fibonacci numbers 
 * below 4000000 (four million) recursively.
**/

#include <stdio.h>
#include "fibonacci.h"

int main(int argc, char **argv)
{
	int sum=0;
	int i = 0;
	while (fibonacci(i) < 4000000) {
		int fib = fibonacci(i);
		if (fib % 2 == 0)
			sum += fib;
		++i;
	}
	printf("Sum: %d\n", sum);
	return 0;
}

int fibonacci(int num)
{
	switch(num) {
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			return (fibonacci(num - 1) +
					fibonacci(num - 2));
	}
}