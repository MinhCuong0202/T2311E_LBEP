#include<stdio.h>
#include <math.h>
int main(){
	int a;
	printf("nhap a = ");
	scanf("%d,&a");
	
	int b;
	printf("nhap b = ");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c = ");
	scanf("%d,&c");
	
	if((a+b>c) && (b+c>a) && (a+c > b)){
		int P = a+b+c;
		float P2 = P/2.0;
		float S = sqrt(P2*(P2-a)*(P2-b)*(P2-c));
		
		printf("Tam giac co chu vi: %d\n",P);
		printf("Dien tich: %f\n",S);
	}else{
		printf("Tam giac khong hop le/n");
		
		
	}
}

