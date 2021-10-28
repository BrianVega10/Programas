#include <stdio.h>
int main(){
int a,n=0;
int i=0;
float promedio=0;
for (a=1; a<=10; a++){
if((n>=0 && a<=10)){
printf ("Indica el numero %d: ",a);
scanf ("%d", &n);
promedio=promedio+n;
}
}
printf("\n");
printf("La media es: %.2f",promedio/10);
return 0;
}
