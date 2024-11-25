#include<stdio.h>

int main(){
	int i;
	do{
		printf("nhap so can tim: ");
		scanf("%d", &i);
		if(i>25){
				printf("so can tim nho hon\n");
		}else if(i<25){
			printf("so can tim lon hon\n");
		}else{
			printf("dung roi");
			break;
		}	
	}while(1);
	return 0;
}
