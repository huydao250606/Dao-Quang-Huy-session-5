#include<stdio.h>

int main(){
	double i,n,result;
	int ans;
	printf("nhap so thu nhat: ");
	scanf("%lf", &i);
	printf("nhap so thu hai: ");
	scanf("%lf", &n);
	do{
		printf("CALCULATOR\n");
		printf("1.Tong hai so\n");
		printf("2.Hieu hai so\n");
		printf("3.Tich hai so\n");
		printf("4.Thuong hai so\n");
		printf("5.Thoat\n");
		printf("nhap lua chon: ");
		scanf("%d", &ans);
		switch(ans){
			case 1:
				result = n+i;
				printf("%.2lf+%.2lf=%.2lf\n",n,i,result);
				break;
			case 2:
				result=i-n;
				printf("%.2lf-%.2lf=%.2lf\n",i,n,result);
				break;
			case 3:
				result=i*n;
				printf("%.2lf*%.2lf=%.2lf\n",i,n,result);
				break;
			case 4:
				if(n!=0){
					result=i/n;
				printf("%.2lf/%.2lf=%.2lf\n",i,n,result);
				}else{
					printf("khong chia duoc cho 0\n");
				}
				break;	
			case 5:
				printf("tam biet!!!");
				break;
			default:
			 	printf("lua chon khong hop le!!!\n");
			 	break;
		}
	}while(ans != 5);
	return 0;
}
