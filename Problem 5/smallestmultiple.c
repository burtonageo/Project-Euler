#include <stdlib.h>
#include <stdio.h>

#include "smallestmultiple.h"

int main(int argc, char **argv) {
	const int divnum = 20;
	int num = 2520;
	bool solution_found = false;
	
	while (!solution_found) {
		solution_found = num_is_evenly_divisible_by_all_nums_to(num, divnum);
		if (!solution_found) {
			num += 10;
		}
	}
	
	printf("%d\n", num); 
	return 0;
}

bool num_is_evenly_divisible_by_all_nums_to(int num , int end) {
	for (int i = 1; i < end; i++) {
		if (num % i != 0) {
			return false;
		}
	}
	return true;
}