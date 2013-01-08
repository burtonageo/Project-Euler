/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 **/

#ifndef LARGESTPRIMEFACTOR_H
#define LARGESTPRIMEFACTOR_H

#include <stdbool.h>

int quadratic_sieve(long n);
int factorize(long n);
int int_sqrt(int n);
bool is_perf_sqrt(int n);

#endif // LARGESTPRIMEFACTOR_H
