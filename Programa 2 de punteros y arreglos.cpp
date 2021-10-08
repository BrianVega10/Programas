#include<stdio.h>

using namespace std;
void intercambia(int *,int *);

int main(void){
	int a=7,b=8;
	printf("a=%d b=%d\n",a,b);
	intercambia(&a,&b);
	printf("a=%d b=%d\n",a,b);
	
}
void intercambia(int *x,int*y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
	
}
