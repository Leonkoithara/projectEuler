#include<stdio.h>
#include<math.h>

int main() {
	long int a, b, c;
	for(a=1; a<1000; a++)
		for(b=a+1; b<1000; b++)
			for(c=b+1; c<1000; c++)
				if(a+b+c==1000 && a*a+b*b==c*c){
					printf("%li %li %li\n", a, b, c);
					printf("%li\n", a*b*c);
					return 0;
			}
}
