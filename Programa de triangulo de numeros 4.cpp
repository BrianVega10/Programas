#include <stdio.h>  
void imprime(int);  
void imprime1(int);
void imprime2(int);
void imprime3(int);
int main()          
{
int n=0;            
printf("Indica el numero limite   ");   
scanf("%d", &n);    
imprime(n);  
imprime1(n); 
imprime2(n);
imprime3(n);
return 0;           
}                   
void imprime(int n) 
{
int i,j;            
for(i=0; i<=n; i++) 
{
    for(j=1; j<=i; j++)      
        printf("%d\t", j);   
 printf("\n");              
}
}
void imprime1(int n)
{
int i,j;            
for(i=n;i>=0;i--) 
{
    for(j=1; j<i; j++)      
        printf("%d\t", j);   
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
void imprime3(int n)
{
int i,j,h;            
for(i=n-1;i>=0;i--){
	for(j=n; j>i; j--){
		printf ("\t");
	}
	for(h=i; h>0; h--){
		printf("%d\t", h);
	}
	printf("\n");
  }
}
