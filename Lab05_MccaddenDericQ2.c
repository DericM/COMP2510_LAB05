/*
 * lab05_mccaddendQ2.c
 *
 *    Created on: Feb 18, 2016
 *        Author: Mccadden, Deric
 * StudentNumber: A00751277
 */

#include <stdio.h>
#define CHECK(PRED) printf("%s ... %s\n",(PRED) ? "passed" : "FAILED", #PRED)

unsigned num_digits(unsigned long n);
unsigned long reverse(unsigned long n);


int main()
{
  int a = 123456789;
  int b = 45584234;
  int c = 2133123;
  
	printf("Number:%d num_digits:%d\n", a, num_digits(a));
  printf("Number:%d  num_digits:%d\n", b, num_digits(b));
  printf("Number:%d   num_digits:%d\n", c, num_digits(c));
  
  printf("Number:%d reverse:%lu\n", a, reverse(a));
	printf("Number:%d  reverse:%lu\n", b, reverse(b));
  printf("Number:%d   reverse:%lu\n", c, reverse(c));

	return 0;
}


/* Returns the number of digits in a non negative integer.
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
  if(n%10 != 0)
    return 0;
	while (n != 0) {
		rev = rev * 10;
		rev = rev + n % 10;
		n = n / 10;
	}
	return rev;
}