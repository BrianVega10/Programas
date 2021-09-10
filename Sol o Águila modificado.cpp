#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,v,x=0,o;
	printf("Indique la cantidad a apostar:");
	scanf("%d",&a);
	printf("Indique la eleccion a apostar:\n1)sol\n0)Aguila\n");
	scanf("%d",&o);
	v=a*2;
	x=rand()%2;
	if(x==o)
	printf("Usted gano el doble:%d",v);
    else
	printf("Usted perdio la apuesta:");
	
}
