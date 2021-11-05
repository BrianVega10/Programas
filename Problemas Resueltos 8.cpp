#include <stdio.h>
main()
{
float euros_a_devolver;
int monedas_50c, monedas_20c, monedas_10c, monedas_5c;
int falta_por_devolver;
printf ("Euros a devolver: ");
scanf ("%f", &euros_a_devolver);
falta_por_devolver=euros_a_devolver*100.0;
monedas_50c=falta_por_devolver/50;
falta_por_devolver=falta_por_devolver-50*monedas_50c;
monedas_20c=falta_por_devolver/20;
falta_por_devolver=falta_por_devolver-20*monedas_20c; monedas_10c=falta_por_devolver/10;
falta_por_devolver=falta_por_devolver-10*monedas_10c;
monedas_5c=falta_por_devolver/5;
printf ("La cantidad de %f euros se devolvera asi:\n",euros_a_devolver);
printf ("- %d monedas de 50 centimos\n", monedas_50c);
printf ("- %d monedas de 20 centimos\n", monedas_20c);
printf ("- %d monedas de 10 centimos\n", monedas_10c);
printf ("- %d monedas de 5 centimos\n", monedas_5c);
} 
