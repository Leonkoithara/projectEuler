#include<stdio.h>

int main() {
	long int first = 1, second = 2, third = 3, i;
	long long int sum = 2;
	while(third<=4000000) {
		third = first + second;
		first = second;
		second = third;
		if(third % 2 == 0)
			sum += third;
	}
	printf("%lli\n", sum);
	return 0;
}
