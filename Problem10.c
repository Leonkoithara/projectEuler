#include<stdio.h>
#include<math.h>

int primeCheck(long long int num) {
	long long int i;
	for(i=2; i<=sqrt(num); i++)
		if(num%i==0)
			return -1;
	return 1;
}

int main() {
	long long int sum = 2, i;
	for(i=3; i<2000000; i+=2){
		if(primeCheck(i)==1)
			sum+=i;
	}
	printf("%lli\n", sum);
	return 0;
}
