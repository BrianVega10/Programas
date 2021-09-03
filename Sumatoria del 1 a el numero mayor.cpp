#include<stdio.h>
int main(){
	int A,B,I;
	int nmayor=0,total=0;
	printf("Indica el valor de A:");
	scanf("%d",&A);
	printf("Indica el valor de B:");
	scanf("%d",&B);
	if(A>B)
	nmayor=A;
	else
	nmayor=B;
	for(I=1;I<=nmayor;I++){
		total=total+I;
		printf("%d+",I);
	}
	printf("\nSumatoria total:%d",total);
	return 0;
}
