#include<stdio.h>
int main(){
	float PRE[5];
	int PRO[5][12];
	int i,l,resultado,resultado2,resultado3,resultado4,resultado5;
	int j,k;
	float r1,r2,r3,r4,r5;
	int t1,t2,t3,t4,t5;
	for(j=1;j<13;j++){
		printf("El mes %d",j);
	for(i=0;i<5;i++){
		printf("\nIngrese la cantidada vendida del producto %d:",i);
		scanf("%d",&PRO[i][j]);
	}
	}
	
	for(k=0;k<5;k++){
 printf("Ingrese el precio del producto %d:",k);
		scanf("%f",&PRE[k]);
	}
	resultado=PRO[0][1]+PRO[0][2]+PRO[0][3]+PRO[0][4]+PRO[0][5]+PRO[0][6]+PRO[0][7]+PRO[0][8]+PRO[0][9]+PRO[0][10]+PRO[0][11]+PRO[0][12];
	printf("El resultado de la suma las cantidad del producto 1 en los 12 meses es:%d\n",resultado);
	
	resultado2=PRO[1][1]+PRO[1][2]+PRO[1][3]+PRO[1][4]+PRO[1][5]+PRO[1][6]+PRO[1][7]+PRO[1][8]+PRO[1][9]+PRO[1][10]+PRO[1][11]+PRO[1][12];
	printf("El resultado de la suma las cantidad del producto 2 en los 12 meses es:%d\n",resultado2);
	
	resultado3=PRO[2][1]+PRO[2][2]+PRO[2][3]+PRO[2][4]+PRO[2][5]+PRO[2][6]+PRO[2][7]+PRO[2][8]+PRO[2][9]+PRO[2][10]+PRO[2][11]+PRO[2][12];
	printf("El resultado de la suma las cantidad del producto 3 en los 12 meses es:%d\n",resultado3);
	
	resultado4=PRO[3][1]+PRO[3][2]+PRO[3][3]+PRO[3][4]+PRO[3][5]+PRO[3][6]+PRO[3][7]+PRO[3][8]+PRO[3][9]+PRO[3][10]+PRO[3][11]+PRO[3][12];
	printf("El resultado de la suma las cantidad del producto 4 en los 12 meses es:%d\n",resultado4);
	
	resultado5=PRO[4][1]+PRO[4][2]+PRO[4][3]+PRO[4][4]+PRO[4][5]+PRO[4][6]+PRO[4][7]+PRO[4][8]+PRO[4][9]+PRO[4][10]+PRO[4][11]+PRO[4][12];
	printf("El resultado de la suma las cantidad del producto 5 en los 12 meses es:%d\n",resultado5);
	
	r1=resultado*PRE[0];
	printf("El monto de las ventas anuales del producto 1 es:%f\n",r1);
	
	r2=resultado2*PRE[1];
	printf("El monto de las ventas anuales del producto 2 es:%f\n",r2);
	
	r3=resultado3*PRE[2];
	printf("El monto de las ventas anuales del producto 3 es:%f\n",r3);
	
	r4=resultado4*PRE[3];
	printf("El monto de las ventas anuales del producto 4 es:%f\n",r4);
	
	r5=resultado5*PRE[4];
	printf("El monto de las ventas anuales del producto 5 es:%f\n",r5);
	
	t1=resultado/12;
	printf("El promedio anual del producto 1 es:%d\n",t1);
	
	t2=resultado2/12;
	printf("El promedio anual del producto 2 es:%d\n",t2);
	
	t3=resultado3/12;
	printf("El promedio anual del producto 3 es:%d\n",t3);
	
	t4=resultado4/12;
	printf("El promedio anual del producto 4 es:%d\n",t4);
	
	t5=resultado5/12;
	printf("El promedio anual del producto 5 es:%d\n",t5);
	


}
