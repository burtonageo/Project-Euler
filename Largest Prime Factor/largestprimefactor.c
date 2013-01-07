#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "largestprimefactor.h"

int main(int argc, char **argv)
{
	printf("%d\n", quadratic_sieve(600851475143));
	return 0;
}

int quadratic_sieve(long num)
{
	int a = sqrt(num);
	int b = a * a - num;
	while (sqrt(b) % 1 == 0) {
		
	}
	
	return array[0];
}