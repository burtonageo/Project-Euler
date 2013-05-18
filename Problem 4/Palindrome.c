/**
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
**/

#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

int main(int argc, char **argv)
{
	int largest_palindrome = 0;
	for (int i = 999; i > 99; --i) {
		for (int j = 999; j > 99; --j) {
			int x = i * j;
			if (is_palindrome(x)) {
				if (x > largest_palindrome) {
					largest_palindrome = x;
				}
			}
		}
	}
	printf("%d is the largest palindrome palindrome\n", largest_palindrome);
	return 0;
}

bool is_palindrome(int n)
{
	if (n < 0) {
		return false;
	}
	
	char str[STR_SIZE];
	sprintf(str, "%d", n);
	
	int length = 0;
	
	while (str[length] != '\0') {
		++length;
	}
	length--;
	for (int i = 0; i <= length; ++i) {
		if (str[i] != str[length]) {
			return false;
		}
		--length;
	}
	return true;
}