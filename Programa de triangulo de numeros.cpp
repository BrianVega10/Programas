#include <stdio.h>  
void imprime(int);  
void imprime2(int);
int main()          
{
int n=0;            
printf("Indica el numero limite   ");   
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

void imprime2(int z)
{
int v,g;            
for(v=z-1;v>=0;v--) 
{
    for(g=1; g<v; g++)      
        printf("%d\t", g+1);   
 printf("\n"); 
}
}
