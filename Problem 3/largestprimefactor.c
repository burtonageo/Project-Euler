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
	int r = factorize(600851475143);
	printf("\n%d\n", r);
	return 0;
}

int quadratic_sieve(long n)
{
	/*
	int smooth = 61;
	int a = ceil(sqrt(n));
	int values[60];
	*/
	/* Gather an array of numbers for sieving,
	   each of which have the property (a - n)^2 */
	/*
	for (int i=0; i<=60; i++) {
		long b = (a * a) - n;
		if (sqrt(b) % 1 == 0) {
			printf("%n, ", b);
			values[i] = b;
		}
		a++;
		i++;
	}
	*/
	
	/* Iterate through numbers, looking for ones
	   with highest prime factors below the smooth number */
	/*for (int i=0; i<=60;i++) {
		
	}*/
	return 0;
}

int factorize(long n)
{
	int a = (int)ceil(sqrt(n));
	int b = (a * a) - n;
	while (!is_perf_sqrt(b)) {
		//printf ("a=%d, b=%d\n", a, b);
		a = ++a;
		b = a*a -n;
	}
	return a + sqrt(b);
}
/*
int factorize(long n)
{
	int a = ceil(sqrt(n));
	int b = (a *= a) - n;
	while (!is_sqrt(b)) {
		printf ("a=%d, b=%d\n", a, b);
		a = ++a;
		b = a*a -n;
	}
	return a + sqrt(b);
}
*/

int is_sqrt(int n)
{
	if (n == 0) {
		return 0;
	}
	int a = (n/2)+1;
	int a2 = (a + (n/a))/2;
	while (a > a2) {
		a = a2;
		a2 = (a + (n/a))/2;
	}
	return a;
}

bool is_perf_sqrt(int n)
{
	return is_sqrt(n) * is_sqrt(n) == n;
}






