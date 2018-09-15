#include<stdio.h>
#include<math.h>

int primeCheck(long long int num) {
	if(num==1)
		return -1;
	if(num==2)
		return 1;
	long long int i;
	for(i=2; i<=(long long int)sqrt((double)num); i++)
		if(num%i==0)
			return -1;
	return 1;
}

int main() {
	long long int a, b, n, x, y, form, count, maxcount=0, pro=1;
	for(a=-999; a<1; a++) {
		for(b=2; b<=1000; b++) {
			count = 0;
			for(n=0; ;n++){
				form = n*n + a*n + b;
				if(form>0) {
					if(primeCheck(form)==1)
						count++;
					else {
						if(count>maxcount) {
							maxcount = count;
							x = a;
							y = b;
							pro = a*b;
						}
						break;
					}
				}
				else {
					if(count>maxcount) {
						maxcount = count;
						x = a;
						y = b;
						pro = a*b;
					}
					break;
				}
			}
		}
	}
	printf("%lli and count %lli\n", pro, maxcount);
	printf("%lli and %lli\n", x, y);
	return 0;
}
