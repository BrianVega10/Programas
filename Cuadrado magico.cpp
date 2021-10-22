#include <stdio.h>
#include <conio.h>
int main()
{
	int a=3;
	int b=3;
	int matriz[3][3], i, j, vector[3]={0, 0, 0}, vector2[3]={0,0,0};
	printf("Realiza el siguiente cuadro magico\n");
	printf("Introduce numeros de 1 al 9, recuerda que no se pueden repetir\n");
	for (i=0; i<a; i++)
		for(j=0; j<b; j++)
		{
		printf("Indica el valor de la posicion %d, %d:  ", i, j);
		scanf("%d", &matriz[i][j]);
		vector[i]=vector[i]+matriz[i][j];
		vector2[j]=vector2[j]+matriz[i][j];
		}
		printf("Los valores obtenidos son: \n\n");
		for(i=0; i<a; i++){
			printf("\n");
			for(j=0; j<b; j++)
			{
			printf("%d\t", matriz[i][j]);	
			}
		printf("\n");
		}
		printf("\n La suma de las filas es: \n");
		for(i=0;i<a;i++){
		printf(" %d \n", vector[i]);
		}
		printf("\n La suma de las columnas es: \n");
		for(i=0; i<a; i++){
		printf(" %d \n", vector2[j]);	
		}
		if (vector[i]==15 & vector2[j]==15)
		printf("El cuadro magico esta correcto");
		else 
		printf("Vuelve a intentarlo");
	getch();
	return 0;		
}
