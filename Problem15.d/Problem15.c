#include <stdio.h>
#include <math.h>
 
/* 
 * Now to reach the base it is basically going 20 steps right and 20 steps down
 * Thus a sequence of 20 r's and 20 d's should reach the base
 * This is now a permutation problem
 *
 * Ans: 40!/(20!*20!) 20 r's and 20 d's are repeated
 * */

void main()
{
	int i;
	long t;

	t = 1;

	for(i = 21;i <=40; i++)
	{ 
		t *= i;
		t = t / (i - 20);
	}

	printf("%ld", t);
}
