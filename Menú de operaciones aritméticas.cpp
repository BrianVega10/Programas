#include<stdio.h>
int main(void){
	int n1,n2;
	float r;
	int op;
	printf("\nindica el primer numero:");
	scanf("%d",&n1);
	printf("\nindica el segundo numero:");
	scanf("%d",&n2);
	printf("\nindique la operacion que desea:");
printf("\n1)suma\n2)resta\n3)divicion\n4)multiplicacion\n");
scanf("%d",&op);
r=0;
switch(op){
	case 1:
		r=n1+n2;
		break;
		
	case 2:
		r=n1-n2;
		break;
	
	case 3:
		r=(float)n1/(float)n2;
		break;
		
	case 4:
		r=n1*n2;
		break;
	default:
	printf("\nOpcion no reconocida");

}
printf("\nEl resultado de la operacion es:%f",r);
	return 0;
	
}
