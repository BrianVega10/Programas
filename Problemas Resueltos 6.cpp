#include <stdio.h>
#include <math.h>
main()
{
float cateto1, cateto2, hipotenusa, area, perimetro;
printf ("Cateto1? ");
scanf ("%f", &cateto1);
printf ("Cateto2? ");
scanf ("%f", &cateto2); 
hipotenusa=sqrt(cateto1*cateto1 + cateto2*cateto2);
area=(cateto1*cateto2)/2.0;
perimetro=cateto1+cateto2+hipotenusa;
printf ("La hipotenusa es: %f\n", hipotenusa);
printf ("El area es: %f\n", area);
printf ("El perimetro es: %f\n", perimetro);
} 
