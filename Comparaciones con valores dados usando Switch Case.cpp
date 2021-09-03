#include <stdio.h>
int main(){
	int A,B,C,V;
	printf("Ingrese el valor de A:");
	scanf("%d",&A);
	printf("Ingrese el valor de B:");
	scanf("%d",&B);
	printf("Ingrese el valor de C:");
	scanf("%d",&C);
	printf("Indique la comprovaion a realizar:");
	printf("\n1)A>3\n2)A>C\n3)B!=C\n4)A==3\n5)A*B==15\n6)C/B==-10\n7)A+B+C==5\n8)A+B==8 Y A-B==2\n9)A+B==8 || A-B==6\n10)A>3 Y B>3 Y C<3\n");
	scanf("%d",&V);
	switch(V){
		
	case 1:
	if (A>3)
	printf("La condicion A>3 se cumple\n");
	else
	printf("La condicion A>3 no se cumple\n");
	break;
	
	case 2:
	if (A>C)
	printf("La condicion A>C se cumple\n");
	else
	printf("La condicion A>C no se cumple\n");
    break;
    
    case 3:
	if (B!=C)
	printf("La condicion B!=C se cumple\n");
	else
	printf("La condicion B!=C no se cumple\n");
	break;
	
    case 4:
	if (A==3)
	printf("La condicion A==3 se cumple\n");
	else
	printf("La condicion A==3 no se cumple\n");
	break;
	
    case 5:
	if (A*B==15)
	printf("La condicion A*B==15 se cumple\n");
	else
	printf("La condicion A*B==15 no se cumple\n");
	break;
	
    case 6:
	if (C/B==-10)
	printf("La condicion C/B==-10 se cumple\n");
	else
	printf("La condicion C/B==-10 no se cumple\n");
	break;
	
    case 7:
	if (A+B+C==5)
	printf("La condicion A+B+C==5 se cumple\n");
	else
	printf("La condicion A+B+C==5 no se cumple\n");
	break;
	
    case 8:
	if ((A+B==8)&&(A-B==2))
	printf("La condicion A+B==8 Y A-B==2 se cumple\n");
	else
	printf("La condicion A+B==8 Y A-B==2 no se cumple\n");
	break;
	
    case 9:
	if ((A+B==8)||(A-B==6))
	printf("La condicion A+B==8 Y A-B==6 se cumple\n");
	else
	printf("La condicion A+B==8 Y A-B==6 no se cumple\n");
	break;
		
    case 10:
	if ((A>3)&&(B>3)&&(C<3))
	printf("La condicion A>3 Y B>3 Y C<3 se cumple\n");
	else
	printf("La condicion A>3 Y B>3 Y C<3 no se cumple\n");
	break;
}
}
