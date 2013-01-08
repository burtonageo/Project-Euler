/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <math.h>
#include <stdio.h>

#include "largestprimefactor.h"

int main(int argc, char **argv)
{
	printf("\n%d\n", quadratic_sieve(600851475143));
	return 0;
}

int quadratic_sieve(long n)
{
	int smooth = 61;
	int a = ceil(sqrt(n));
	int values[60];
	
	/* Gather an array of numbers for sieving,
	   each of which have the property (a - n)^2 */
	for (int i=0; i<=60; i++) {
		long b = (a * a) - n;
		if (sqrt(b) % 1 == 0) {
			printf("%n, ", b);
			values[i] = b;
		}
		a++;
		i++;
	}
	
	/* Iterate through numbers, looking for ones
	   with highest prime factors below the smooth number */
	for (int i=0; i<=60;i++) {
		
	}
	return values[0];
}

int factorize(int n)
{
	if (n < 2) {
		return;
	}
	
}