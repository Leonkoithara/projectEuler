#include<stdio.h>
#include<math.h>

int main() {
	long long int num = 600851475143, i, lpf=2;
	while(num%2==0)
		num/=2;
	
	for(i=3;i<sqrt(num);i+=2)
		if(num%i==0){
			num/=i;
			lpf=i;
		}

	if(num>2)
		lpf = num;

	printf("%lli\n", lpf);
	return 0;

}
