/*
*    Created on: Feb 18, 2016
*        Author: Mccadden, Deric
* StudentNumber: A00751277
*/

#include <stdio.h>

#define CHECK(PRED) printf("%s ... %s\n",(PRED) ? "passed" : "FAILED", #PRED)


int min_max(const int a[], size_t n, int *pmin, int *pmax);
unsigned num_digits(unsigned long n);
unsigned long reverse(unsigned long n);


int main()
{
	const int a[] = { 1,2,5,6,7,8,3,2,5 };
	const int b[] = { 0,2,5,6,9 };
	const int c[] = { 7,2,5,6,7,8,3,2,5,5,3,2,7 };

	int x = 123456789;
	int y = 45584234;
	int z = 2133123;

	size_t n = 9;
	int min, max;
	int *pmin, *pmax;

	pmin = &min;
	pmax = &max;

	min_max(a, n, pmin, pmax);
	printf("Min:%d Max:%d\n", min, max);

	n = 5;
	min_max(b, n, pmin, pmax);
	printf("Min:%d Max:%d\n", min, max);

	n = 13;
	min_max(c, n, pmin, pmax);
	printf("Min:%d Max:%d\n", min, max);

	printf("Number:%d num_digits:%d\n", x, num_digits(x));
	printf("Number:%d  num_digits:%d\n", y, num_digits(y));
	printf("Number:%d   num_digits:%d\n", z, num_digits(z));

	printf("Number:%d reverse:%lu\n", x, reverse(x));
	printf("Number:%d  reverse:%lu\n", y, reverse(y));
	printf("Number:%d   reverse:%lu\n", z, reverse(z));

	getchar();
	return 0;
}

/*
* Get the min and max and pass it through their respective pointers.
* Return 1 on failure.
*/
int min_max(const int a[], size_t n, int *pmin, int *pmax) {
	int max, min;
	size_t i;
	if (n < 1)
		return 1;
	min = max = a[0];
	if (n > 1) {
		for (i = 0; i < n; i++) {
			if (a[i] > max)
				max = a[i];
			if (a[i] < min)
				min = a[i];
		}
	}
	*pmin = min;
	*pmax = max;
	return 0;
}



/* 
* Returns the number of digits in a non negative integer.
*
*/
unsigned num_digits(unsigned long n) {
	if (n <= 9)
		return 1;
	return 1 + num_digits(n / 10);
}


/* Reverse the digits in a non negative integer.
*  precondition: n%10 != 0
*  return 0 if !precondition
*/
unsigned long reverse(unsigned long n) {
	long rev = 0;
	if (n % 10 != 0)
		return 0;
	while (n != 0) {
		rev = rev * 10;
		rev = rev + n % 10;
		n = n / 10;
	}
	return rev;
}