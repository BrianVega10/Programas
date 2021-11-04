#include <stdio.h>
main()
{
float precio_neto, precio_coste, margen;
printf ("Cual es el precio de coste?");
scanf ("%f", &precio_coste);
printf ("Cual es el margen?");
scanf ("%f", &margen);
precio_neto=precio_coste*(100+margen)/100;
printf ("El precio neto de este producto es de %f euros\n",precio_neto);
} 
