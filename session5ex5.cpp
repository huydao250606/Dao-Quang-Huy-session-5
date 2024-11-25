#include<stdio.h>

int main(){
	int i=1;
	int n=1;
	int sum;
	while(n<10){
		for(i=1;i<=10;i++){
			sum=n*i;
			printf("%d x %d = %d\n",n,i,sum);
		}
		n++;
		printf("\n");
	}
	return 0;
}
