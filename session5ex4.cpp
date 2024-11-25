#include<stdio.h>

int main(){
	int i;
	int n;
	int sum;
	printf("nhap so nguyen 1-10: ");
	scanf("%d", &i);
	if(i<1 || i>10){
		printf("so nhap khong hop le");
		return 1;
	}
	for(n=1;n<=10;n++){
		sum=n*i;
		printf("%d x %d = %d\n" ,i,n,sum);
	}
	return 0;
}
