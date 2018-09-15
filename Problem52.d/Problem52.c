#include<stdio.h>
#include<stdlib.h>

int checkDigits(int count[], int num) {
	int *exp = calloc(10,sizeof(int));
	while(num>0) {
		int dig = num%10;
		exp[dig]++;
		num /= 10;
	}
	for(int i=0; i<10; i++) {
		if(count[i]!=exp[i]) {
			free(exp);
			return 0;
		}
	}
	free(exp);
	return 1;
}

int main() {
	int i = 1;
	while(1) {
		int num = i;
		int *count = calloc(10, sizeof(int));
		while(num>0) {
			int dig = num%10;
			count[dig]++;
			num /= 10;
		}
		
		if(checkDigits(count, 2*i) && checkDigits(count, 3*i) && checkDigits(count, 4*i) && checkDigits(count, 5*i) && checkDigits(count, 6*i)) {
			printf("%d\n", i);
			free(count);
			break;
		}

		i++;
		free(count);
	}
	return 0;
}
