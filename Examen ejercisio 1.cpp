#include<stdio.h>
#include<conio.h>

int main(){
	int matriz[50][50];
	int M,N,filas,columnas;
	
	printf("DIGITE EL NUMERO DE FILAS:");
	scanf("%i",&filas);
	printf("DIGITE EL NUMERO DE COLUMNAS:");
	scanf("%i",&columnas);
	
	
	
	for(M=0;M<filas;M++){
		for(N=0;N<columnas;N++){
			printf("DIGITE UN NUMERO MATRIZ[%i][%i]:",M+1,N+1);
			scanf("%i-",&matriz[M][N]);
		}	
	}
	
	printf("\nMATRIZ ORIGINAL\n");
	for(M=0;M<filas;M++){
		for(N=0;N<columnas;N++){
			printf("%i",matriz[M][N]);
			
		}
		printf("\n");
    }
    
    printf("\nNMATRIZ TRANSPUESTA\n");
	for(M=0;M<filas;M++){
		for(N=0;N<columnas;N++){
			printf("%i",matriz[N][M]);
			
		}
		printf("\n");
    }
    

getch();
return 0;
}
