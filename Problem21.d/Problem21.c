#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fsum(int n) {
	long int sum = 1;
	for(int i=2; i<=(int)sqrt(n); i++)
		if(n%i==0)
			sum += i + n/i;
	return sum;
}

int main() {
	int *d = (int *)calloc(5000, sizeof(int));
	for(int i=2; i<5000; i++)
		d[i] = fsum(i);
	for(int i=2; i<5000; i++) {
		int dsum = d[i];
		if(d[dsum]==i && i!=dsum)
			printf("%d %d\n", i, dsum);
	}
	return 0;
}
