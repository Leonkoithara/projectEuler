#include<stdio.h>
#include<math.h>

int divisors(long long int n) {
	long long int i;
	int count = 2;
	for(i=2; i<=sqrt(n); i++)
		if(n%i==0)
			count+=2;
	return count;
}

int main() {
	long long int i, sum = 1;
	for(i=1; ;i++){
		sum = i*(i+1)/2;
		if(divisors(sum) > 167){
			printf("%lli\n", sum);
			break;
		}
	}
	return 0;
}
