#include<stdio.h>
#include<stdlib.h>

int palinCheck(long int num) {
	long int n = num, rev = 0, dig;
	while(num>0) {
		dig = num % 10;
		rev = rev*10 + dig;
		num/=10;
	}
	if(n==rev)
		return 1;
	else
		return -1;
}

int main() {
	long int i, j, pro, large = 0;
	for(i=999; i>=100; i--) {
		for(j=999; j>=100; j--) {
			pro = i*j;
			if(palinCheck(pro)==1) {
				if(pro > large)
					large = pro;
			}
		}
	}
	printf("%li\n", large);
	return 0;
}
