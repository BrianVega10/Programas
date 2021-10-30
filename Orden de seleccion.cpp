#include <stdio.h>
#include <conio.h>
void OrdenarSeleccion(double numeros[ ],int N);
int main(){
	int x;
	double numeros[ ]={23, 78, 45, 8, 32, 56};
	for(x=0;x<6;x++){
	printf("%3.1f\t",numeros[x]);
	OrdenarSeleccion(numeros, 6);}
getch();
return 0;
}
void OrdenarSeleccion(double numeros[ ],int N)
{
int i, j,pos_min;
double tmp;
for (i=0; i<5; i++) {
pos_min=i;
for (j=i+1; j<6; j++)
if (numeros[j]<numeros[pos_min])
pos_min=j;
tmp=numeros[i];
numeros[i]=numeros[pos_min];
numeros[pos_min]=tmp;
}
}
