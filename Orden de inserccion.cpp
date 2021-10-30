#include <stdio.h>
#include <conio.h>
void OrdenarInsercion(double v[],int N);
int main(){
	int x;
	double v[]={23,78,45,8,32,56};
	for(x=0;x<6;x++){
	printf("%3.1f\t",v[x]);
	OrdenarInsercion(v,6);
	}
getch();
return 0;
}

void OrdenarInsercion (double v[], int N)
{
int i, j;
double tmp;
for (i=1; i<N; i++) {
tmp = v[i];
for (j=i; (j>0) && (tmp<v[j-1]); j--)
v[j] = v[j-1];
v[j] = tmp;
}
}
