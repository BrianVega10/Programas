#include <stdio.h>
#include <conio.h>
void OrdenarBurbuja(double v[],int N);
int main(){
	int x;
	double v[]={23,78,45,8,32,56};
	for(x=0;x<6;x++){
	printf("%3.1f\t",v[x]);
	OrdenarBurbuja(v,6);
	}
getch();
return 0;
}
void OrdenarBurbuja (double v[], int N)
{
int i, j;
double tmp;
for (i=1; i<N; i++)
for (j=N-1; j>i; j--)
if (v[j] < v[j-1]) {
tmp = v[j];
v[j] = v[j-1];
v[j-1] = tmp;
}
}
