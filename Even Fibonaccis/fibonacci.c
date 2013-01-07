/**
 * Each new term in the Fibonacci sequence is generated by adding 
 * the previous two terms. By starting with 1 and 2, the first 10 terms will be:
 *
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not 
 * exceed four million, find the sum of the even-valued terms.
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