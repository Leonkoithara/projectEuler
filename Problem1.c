#include<stdio.h>

int main(){
	long int T, N, n;
	scanf("%li", &T);
	while(T--) {
		long int sum = 0;
		scanf("%li", &N);
		n = (N-1)/3;
		sum += (n)*(3+n*3) / (2);
		n = (N-1)/5;
		sum += (n)*(5+n*5) / (2);
		n = (N-1)/15;
		sum -= (n)*(15+n*15) / (2);
		printf("%li\n", sum);
	}
	return 0;
}
