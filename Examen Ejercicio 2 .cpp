#include<stdio.h>
void tabla(float *p,int n);
int main(void){
	int i;
	float a[5]={0,0,0,0,0};
	
	for(i=0; i<5; i++){
		printf("Inserte un numero:");
		scanf("%f",&a[i]);
	}
	
	printf("Columna 1");
	printf("Columna 2");
	printf("Columna 3\n");
	
	tabla(a,5);
	return 0;
}

void tabla(float *p,int n){
	int i;
	
	for(i=0; i<5; i++){
		printf("a\t");
		printf("%.2f\t",p[i]);
		printf("%o\n",&p[i]);
	}
}
