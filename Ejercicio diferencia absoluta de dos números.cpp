#include<stdio.h>
int main(void){
	int n1, n2;
	int r;
	printf("introdusca el primer numero:\n");
	scanf("%d",&n1);
	printf("Introduzca el segundo numero:\n");
	scanf("%d",&n2);
	if(n1>n2)
	r=n1+n2;
	else
	r=n2-n1;
	printf("La diferencia es:\n%d",r);
	return 0;
	
}
