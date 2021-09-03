#include<stdio.h>
#include<math.h>
#include <conio.h>
int main (){
	
	int u,d,div,r;
	
	printf("Indica el valor del primer número: \n");
	scanf("%i",&u);
	
	printf("Indica el valor del segundo número: \n ");
	scanf("%i", &d);
	div=u/d;
	r=(pow(div,2));
	printf("el resultado es de la divicion es:%i\n",div);
	printf("el resultado de la potencia es:%i",r);
	 
	return 0;
}
