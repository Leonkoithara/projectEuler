#include<stdio.h>

int main(){
	char ch;
	do {
		int i, sum = 0, size;
		printf("\nSize: ");
		scanf("%d", &size);
		for(i=3;i<size;i+=3)
			sum+=i;
		for(i=5;i<size;i+=5)
			sum+=i;
		for(i=15;i<size;i+=15)
			sum-=i;
		printf("%d", sum);
		printf("\nStill wanna continue? ");
		scanf(" %c", &ch);
	}while(ch=='y');

	return 0;
}
