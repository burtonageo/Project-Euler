/**
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 *
 * What is the 10 001st prime number?
**/

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "thousandandfirstprime.h"

int main(int argc, char **argv) 
{
	long prime_num = nth_prime(10001);

	printf("10001st Prime: %ld\n", prime_num);
	return 0;
}

long nth_prime(long num) {
	long current_prime = 2;
	long current_num = 2;
	int counter = 0;
	
	while (counter < num) {
		while (!is_prime(current_num)) {
			current_num++;
		}
		current_prime = current_num;
		current_num++;
		counter++;
	}
	return current_prime;
}

bool is_prime(long p) {
	for (long i = 2; i < p; i++) {
		if (p % i == 0 && i != p) {
			return false;
		}
	}
	return true;
}