#include<stdio.h>
#include<conio.h>
void orden( int num[],int d );
int main(){
	int d,num[25]={};
	for(d=0;d<25;d++){
	printf("Indica el numero %i:",d+1);
	scanf("%i",&num[d]);
	}
	orden(num,d);
	getch();
return 0;
}

void orden( int num[],int d ){
int i,j,aux,min,suma=0;
	float media=0;
	
	for(i=0;i<25;i++){
	min=i;
	for(j=i+1;j<=25;j++){
	if(num[j]<num[min]){
	min=j;		
	}
	}
	aux=num[i];
	num[i]=num[min];
	num[min]=aux;
	}
	printf("\n");
	printf("Los numeros ordenados son:\n");
	for(i=25;i>=1;i--){
		printf("%i  ",num[i]);
	}
	printf("\n");
	printf("La media es: \n");
	for(i=0;i<=25;i++){
		suma=suma+num[i];
		media=suma/25;
	}
	printf("%.2f",media);
}
