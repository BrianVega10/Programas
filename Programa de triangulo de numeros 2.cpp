#include <stdio.h>  
void imprime(int); 
void imprime2(int);
int main()          
{
int n=0;            
printf("Indica el numero limite ");   
scanf("%d", &n);    
imprime(n);   
imprime2(n);      
return 0;           
}                   
void imprime(int b) 
{
int a,c;            
for(a=0; a<=b; a++) 
{
    for(c=1; c<=a; c++)      
        printf("%d\t", c);   
    printf("\n");               
}
}
void imprime2(int n)
{
int i,j,h;            
for(i=1; i<=n; i++) {
	for(j=n; j>i; j--){
		printf ("\t");
	}
	for(h=i; h>0; h--){
		printf("%d\t", h);
	}
	printf("\n");
  }
}
