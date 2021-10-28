#include<stdio.h>
#include<conio.h>

int main(){
	
	int d,a[25]={};
	int i,j,aux,min,suma=0;
	float media=0;
	
	for(d=0;d<25;d++){
		printf("%i.Digite un numero:",d+1);
		scanf("%i",&a[d]);
	}
	
	for(i=0;i<25;i++){
		min=i;
		for(j=i+1;j<=25;j++){
			if(a[j]<a[min]){
				min=j;		
				}
		}
		aux=a[i];
		a[i]=a[min];
		a[min]=aux;
	}
	printf("\n");
	printf("\n");
	
	printf("NUMERACION\n");
	for(i=25;i>=0;i--){
		printf("%i,",a[i]);
	}
	
	printf("\n");
	printf("\n");
	
	printf("MEDIA\n");
	for(i=0;i<=25;i++){
		suma=suma+a[i];
		media=suma/25;

	}
	printf("%f",media);
	
	getch();
	return 0;
}
