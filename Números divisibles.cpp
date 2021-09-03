#include<stdio.h>
int divisibilidad(int a, int c){
	if(c%a==0)return 1;
	else
	return 0;
}
int divisibilidad(int b,int c){
	if(c%b==0) return 1;
	else
	return 0;
}
int main(void){
	int a=0,b=0,c=0;
	printf("Indica el valor de A:");
	scanf("%d",&a);
	printf("Indica el valor de B:");
	scanf("%d",&b);
	printf("Indica el valor de C:");
	scanf("%d",&c);
	
	if(divisibilidad(a,c))
	printf("%d es divisible entre %d",c,b);
	else
	printf("%d no es divisible entre %d",c,a);
	
	if(divisibilidad(b,c))
	printf("%d es divisible entre %d",c,b);
	else
	printf("%d no es divisible entre %d",c,b);
	return 0;
}
