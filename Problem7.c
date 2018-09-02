#include<stdio.h>
#include<math.h>

int primeCheck(unsigned long long int num) {
	unsigned long long int i;
	for(i=2; i<=sqrt(num); i++) {
		if(num%i == 0)
			return -1;
	}
	return 1;
}

int main() {
	unsigned long long int i, j=1, arr[10001];
	arr[0] = 2;
	for(i=3; ;i+=2) {
		if(primeCheck(i)==1){
			arr[j] = i;
			if(j==10000)
				break;
			else
				j++;
		}
	}
	printf("%llu\n", arr[10000]);
	return 0;
}
