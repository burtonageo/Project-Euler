/**
 * The sum of the squares of the first ten natural numbers is,
 *
 * 		12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * 		(1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten 
 * natural numbers and the square of the sum is 3025  385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one 
 * hundred natural numbers and the square of the sum.
**/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int sumOfSquares = 0;
	int sumToSquare = 0;
	for (int i = 1; i <= 100; ++i) {
		sumToSquare += i;
		sumOfSquares += (i * i);
	}
	int result = (sumToSquare * sumToSquare) - sumOfSquares;
	printf("Result = %d\n", result);
	return 0;
}
