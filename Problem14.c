#include<stdio.h>

int collatz(long int num) {
	int count = 0;
	while(num!=1) {
		if(num%2==0) {
			num/=2;
			count++;
		}
		else {
			num = 3*num + 1;
			count++;
		}
	}
	return count;
}

int main() {
	long int i, num;
	int max = 1;
	for(i=1; i<46500; i++) {
		int count = collatz(i);
		if(count>max) {
			num = i;
			max = count;
		}
	}
	printf("%li -> %d\n", num, max);
	return 0;
}
