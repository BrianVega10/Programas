#include<stdio.h>
void ed(int* n){
	int y=* n;
	y=(y+2)/2+2-(3*y);
	*n=y;
}
int main(){
	int x=10;
	ed(&x);
	printf("%d\n",x);
	return 0;
}
