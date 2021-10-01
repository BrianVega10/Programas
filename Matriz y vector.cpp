#include<stdio.h>
#include<conio.h>
int main(){
	int a=3;
	int b=3;
	int matriz[3][3],i,j,vector[3]={0,0,0};
	for(i=0;i<a;i++)
	for(j=0;j<b;j++){
		printf("Indica el valor de la posicion %d,%d:",i,j);
		scanf("%d",&matriz[i][j]);
		vector[i]=vector[i]+matriz[i][j];
		
	}
	printf("Los valores obtenidos de la suma de las filas son:\n\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
	{
		printf("%d \t",matriz[i][j]);
	}
	printf("\n\n");
}
	for(i=0;i<a;i++)
	{
	printf("%d\n",vector[i]);
}
getch();
return 0;
}
