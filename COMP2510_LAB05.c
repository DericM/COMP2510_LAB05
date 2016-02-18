// COMP2510_LAB05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void min_max(const int a[], size_t n, int *pmin, int *pmax);
unsigned num_digits(unsigned long n);
unsigned long reverse(unsigned long n);

int main()
{

	printf("%d\n", num_digits(123456789));

	printf("%d\n", reverse(123456789));

	getchar();
    return 0;
}


/* 
 *
 * pre-condition: n >= 1 
 */ 
void min_max(const int a[], size_t n, int *pmin, int *pmax) {


}


/* Returns the number of digits in a non negative integer.
 *
 */
unsigned num_digits(unsigned long n) {
	if (n < 10)
		return 1;
	return 1 + num_digits(n / 10);
}




unsigned long reverse(unsigned long n) {
	long rev = 0;
	while (n != 0){
		rev = rev * 10;
		rev = rev + n % 10;
		n = n / 10;
	}
	return rev;
}