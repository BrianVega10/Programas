#include <conio.h>
#include <math.h>
 
int main()
{
	int a[100];
	int i,dato,elem,desv,varianza,diferencia,suma;
 
	printf("\n Introduce el tamaño del arreglo: ");
	scanf("%d", &dato);
	printf("\n");
 
	for(i=0; i<dato; i++)
	{
		printf(" Introduce los elementos del arreglo: ");
		scanf("%d", &a[i]);
	}
 
	printf("\n\n");
 
	for(i=0; i<dato; i++)
	{
		printf(" %d", a[i]);
	}
 
	//Diferencia de los elementos
	diferencia=diferencia-a[0];
	for(i=0; i<dato; i++)
	{
		diferencia=diferencia-a[i];
	}
	printf("\nLa diferencia es: %d", diferencia);
 
	for(i=0; i<dato; i++)
	{
		varianza=(diferencia)*(diferencia)/(dato);
	}
	printf("\n\n La varianza es: %d", varianza);	
}
