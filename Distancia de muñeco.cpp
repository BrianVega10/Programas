#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,a,b;
	a=3;
	a=rand()%110;
	printf("Ingrese los pasos entre el muñeco y la carita que apostara:");
	scanf("%d",&b);
	printf(":-D:objetivo a%dpasos\n",a);
	printf("|:-D|");
	for(i=0;i<a;i++){
		printf("=");
	}
	printf("|=)|");
	if(b=a)
	printf("\nGano la apuesta");
	else
	printf("\nUsted perdio la apuesta");

}
