#include<stdio.h>

int main() {
	long int p, a, b, c, count, maxp = 1, maxcount=0;
	for(p=120; p<=1000; p++) {
		count = 0;	
		for(a=3; a<=500; a++)
			for(b=a+1; b<=500; b++)
				for(c=b+1; c<=500; c++)
					if(a*a + b*b == c*c && a+b+c==p) {
						count++;
					}
		if(count>maxcount) {
			maxcount = count;
			maxp = p;
		}
	}
	printf("Maxp is %li and count is %li.\n", maxp, maxcount);
	return 0;
}
