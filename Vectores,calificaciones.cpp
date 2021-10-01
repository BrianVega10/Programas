#include<stdio.h>
#include<math.h>
int main(){
		int a[5][20];
		int suma=0,i;
		float promediode1,promediode2,promediode3,promediode4,promediode5;
		float promedio;
		float b1,b2,b3,b4,b5;
		int n=20;
		for(i=0;i<n;i++){
			printf("Indique la calificacion  de la materia 1:");
			scanf("%d",&a[1][i]);
			printf("indique la calificacion de la materia 2:");
			scanf("%d",&a[2][i]);
			printf("Indique la calificacion de la materia 3:");
			scanf("%d",&a[3][i]);
			printf("Indique la calificacion de la materia 4:");
			scanf("%d",&a[4][i]);
			printf("Indique la calificacion de la materia 5:");
			scanf("%d",&a[5][i]);
			
			suma=a[1][i]+a[2][i]+a[3][i]+a[4][i]+a[5][i];
			promedio=(suma)/5;
			printf("\nEl promedio general es:%f",promedio);
			printf("\n");
		}
		promediode1=a[1][0]+a[1][1]+a[1][2]+a[1][3]+a[1][4]+a[1][5]+a[1][6]+a[1][7]+a[1][8]+a[1][9]+a[1][10]+a[1][11]+a[1][12]+a[1][13]+a[1][14]+a[1][15]+a[1][16]+a[1][17]+a[1][18]+a[1][19];
		b1=promediode1/20;
		printf("El promedio de la materia 1 es:%f",b1);
			
	    
		promediode2=a[2][0]+a[2][1]+a[2][2]+a[2][3]+a[2][4]+a[2][5]+a[2][6]+a[2][7]+a[2][8]+a[2][9]+a[2][10]+a[2][11]+a[2][12]+a[2][13]+a[2][14]+a[2][15]+a[2][16]+a[2][17]+a[2][18]+a[2][19];
		b2=promediode2/20;
		printf("El promedio de la materia 2 es:%f",b2);
		
		
		promediode3=a[3][0]+a[3][1]+a[3][2]+a[3][3]+a[3][4]+a[3][5]+a[3][6]+a[3][7]+a[3][8]+a[3][9]+a[3][10]+a[3][11]+a[3][12]+a[3][13]+a[3][14]+a[3][15]+a[3][16]+a[3][17]+a[3][18]+a[3][19];
		b3=promediode3/20;
		printf("El promedio de la materia 3 es:%f",b3);
		
		
		promediode4=a[4][0]+a[4][1]+a[4][2]+a[4][3]+a[4][4]+a[4][5]+a[4][6]+a[4][7]+a[4][8]+a[4][9]+a[4][10]+a[4][11]+a[4][12]+a[4][13]+a[4][14]+a[4][15]+a[4][16]+a[4][17]+a[4][18]+a[4][19];
		b4=promediode4/20;
		printf("El promedio de la materia 4 es:%f",b4);
		
		
		promediode5=a[5][0]+a[5][1]+a[5][2]+a[5][3]+a[5][4]+a[5][5]+a[5][6]+a[5][7]+a[5][8]+a[5][9]+a[5][10]+a[5][11]+a[5][12]+a[5][13]+a[5][14]+a[5][15]+a[5][16]+a[5][17]+a[5][18]+a[5][19];
		b5=promediode5/20;
		printf("El promedio de la materia 5 es:%f",b5);
		return 0;
	
}
