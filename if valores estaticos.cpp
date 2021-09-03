#include <stdio.h>
int main(){
	int A=5,B=3,C=-12;
	if (A>3)
	printf("La condicion A>3 se cumple\n");
	else
	printf("La condicion A>3 no se cumple\n");


	if (A>C)
	printf("La condicion A>C se cumple\n");
	else
	printf("La condicion A>C no se cumple\n");

	if (B!=C)
	printf("La condicion B!=C se cumple\n");
	else
	printf("La condicion B!=C no se cumple\n");

	if (A==3)
	printf("La condicion A==3 se cumple\n");
	else
	printf("La condicion A==3 no se cumple\n");

	if (A*B==15)
	printf("La condicion A*B==15 se cumple\n");
	else
	printf("La condicion A*B==15 no se cumple\n");

	if (C/B==-10)
	printf("La condicion C/B==-10 se cumple\n");
	else
	printf("La condicion C/B==-10 no se cumple\n");

	if (A+B+C==5)
	printf("La condicion A+B+C==5 se cumple\n");
	else
	printf("La condicion A+B+C==5 no se cumple\n");

	if ((A+B==8)&&(A-B==2))
	printf("La condicion A+B==8 Y A-B==2 se cumple\n");
	else
	printf("La condicion A+B==8 Y A-B==2 no se cumple\n");

	if ((A+B==8)||(A-B==6))
	printf("La condicion A+B==8 Y A-B==6 se cumple\n");
	else
	printf("La condicion A+B==8 Y A-B==6 no se cumple\n");	

	if ((A>3)&&(B>3)&&(C<3))
	printf("La condicion A>3 Y B>3 Y C<3 se cumple\n");
	else
	printf("La condicion A>3 Y B>3 Y C<3 no se cumple\n");		
}
