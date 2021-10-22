#include <stdio.h>
#include<conio.h >
int arr[10]={2, 3, 4, 5, 9, 19, 300, 29, 4, 1};
void ordena (int *p, int N);
int compara (int *m, int *n);
int main()
{
int i=0;
for (i=0; i < 10; i ++)
{
printf("[ %d ] ", arr[i]);
}
ordena(arr, 10);
printf("\n");
for (i=0; i < 10; i ++)
{
printf("[ %d ] ", arr[i]);
}
getch();
return 0;
}
void ordena (int *p, int N)
{
int i, j, t; 
for (i=N-1;i>=0;i--)
{
 for (j=1;j<=i;j++)
 { 
 if (compara(&p[j-1],&p[j]))
 {
 t = p[j-1];
 p[j-1]= p[j];
 p[j] = t;
}
}
}
}int compara(int *m, int *n)
{
return (*m >*n);
}
