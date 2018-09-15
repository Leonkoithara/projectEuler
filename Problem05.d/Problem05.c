#include<stdio.h>

unsigned long long int gcd(unsigned long long int a, unsigned long long int b) {
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a>b)
		return gcd(a%b, b);
	else
		return gcd(a, b%a);
}

unsigned long long int lcm(unsigned long long int a, unsigned long long int b) {
	return (a*b)/gcd(a,b);
}

int main() {
  unsigned long long int res=1;
	int i;
	for(i=1;i<=20;i++) {
		res = lcm(i,res);
	}
	printf("%llu\n", res);
	return 0;
}
