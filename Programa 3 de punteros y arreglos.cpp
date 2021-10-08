#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void funcion(int *vec);
void leer(int *vec);
int  main(){
	int vec[3];
	funcion(vec);
	leer(vec);
	
	system("pause");
	return 0;
}
void funcion(int *vec){
	int i;
	
	for(i=0;i<3;i++){
		printf("Introduce un valor para la posicion %i:",i+1);
		scanf("%i",(vec+i));
	}
}

void leer(int *vec){
	int i;
	
	
	for(i=0;i<3;i++){
		printf("%i\n",*(vec+i));
	}
}
