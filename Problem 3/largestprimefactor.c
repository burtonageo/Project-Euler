/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "largestprimefactor.h"

int main(int argc, char **argv)
{
	printf("Largest common prime: %ld\n", largest_common_prime(600851475143)); 
	return 0;
}

long largest_common_prime(long n)
{
	if (n < 2) {
		return -1;
	}
	
	long i = 2;
	while(i < n) {
		if (n % i != 0) {
			++i;
		} else {
			n = n/i;
		}
	}
	
	return n;
}