#include <stdio.h>
#include <conio.h>
int main()
{
	int a=5;
	int b=5;
	int matriz[5][5], i, j, vector[5]={0,0,0,0,0}, vector2[5]={0,0,0,0,0};
	for (i=0; i<a; i++)
		for(j=0; j<b; j++)
		{
		printf("Indica el valor de la posicion %d, %d:  ", i, j);
		scanf("%d", &matriz[i][j]);
		vector[i]=vector[i]+matriz[i][j];
		vector2[j]=vector2[j]+matriz[i][j];
		}
		printf("Los valores obtenidos son: \n");
		for(i=0; i<a; i++){
			printf("\n");
			for(j=0; j<b; j++)
			{
			printf("%d\t", matriz[i][j]);
		}
		}
		printf("\n");
		printf("Los valores de la diagonal principal son: \n");
			printf("%d\n", matriz[0][0]);
			printf("%d\n", matriz[1][1]);
			printf("%d\n", matriz[2][2]);
			printf("%d\n", matriz[3][3]);
			printf("%d\n", matriz[4][4]);
	getch();
	return 0;		
}
