#include<stdio.h>

int main() {
	int i, j, n1, n2, d1, d2, num = 1, den = 1;
	float exp, real;
	for(i=11; i<100; i++) {
		if(i%10!=0) {
			n1 = i/10;
			n2 = i%10;
			for(j=i+1; j<100; j++) {
				if(j%10!=0) {
					exp = (float)i/j;
					d1 = j/10;
					d2 = j%10;
					if(n1==d1) {
						real = (float)n2/d2;
						if(exp==real) {
							num *= i;
							den *= j;
							printf("%d/%d = %d/%d\n", i, j, n2, d2);
						}
					}
					else if(n1==d2) {
						real = (float)n2/d1;
						if(exp==real) {
							num *= i;
							den *= j;
							printf("%d/%d = %d/%d\n", i, j, n2, d1);
						}
					}
					else if(n2==d1) {
						real = (float)n1/d2;
						if(exp==real) {
							num *= i;
							den *= j;
							printf("%d/%d = %d/%d\n", i, j, n1, d2);
						}
					}
					else if(n2==d2) {
						real = (float)n1/d1;
						if(exp==real) {
							num *= i;
							den *= j;
							printf("%d/%d = %d/%d\n", i, j, n1, d1);
						}
					}
				}
			}
		}
	}
	printf("\n%d/%d\n",num, den); 
	return 0;
}
