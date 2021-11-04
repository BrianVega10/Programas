#include <stdio.h>
#define DATO 4
main()
{
int x, y=1;
float z;
x=3/2+10-3;
z=3.0/2.0+10-3;
printf ("%d -- %f\n", x, z);
printf ("%d\n", DATO*3+1/2);
printf ("%d\n", 5+2-1>5);
printf ("%d\n", 3>1 || DATO*2<1);
printf ("%d\n", 5!=1 && DATO>2);
y=x;
printf ("%d\n", x+y<=z);
} 
