#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n,i,fact=1;
	char sig;
	printf("Calculadora de factorial\n");
	do{
		printf("Escribe un numero:");
		scanf("%d",&n);
		for(i=n;i>1;i--){
			fact=fact*i;}
		printf("El factorial de %d = %d\n",n,fact);
		printf("¿Desea realizar de nuevo el calculo?s/n:");
		scanf("%s",&sig);
	}
	while(sig=='s'||sig=='S');
	printf("Gracias por su preferencia,hasta la proxima.");
	return 0;
	
}
