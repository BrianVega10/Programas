#include <stdio.h>
main()
{
long int ventas_cola, ventas_naranja, ventas_limon;
float precio_cola, precio_naranja, precio_limon;
float total_cola, total_naranja, total_limon;
printf ("Datos de la cola:\n");
printf ("\tVentas:");
scanf ("%ld", &ventas_cola);
printf ("\tPrecio: ");
scanf ("%f", &precio_cola);
printf ("Datos de la naranja:\n");
printf ("\tVentas:");
scanf ("%ld", &ventas_naranja);
printf ("\tPrecio: ");
scanf ("%f", &precio_naranja);
printf ("Datos del limon:\n");
printf ("\tVentas:");
scanf ("%ld", &ventas_limon);
printf ("\tPrecio: ");
scanf ("%f", &precio_limon);
total_cola = ventas_cola*precio_cola;
total_naranja = ventas_naranja*precio_naranja;
total_limon = ventas_limon*precio_limon;
printf ("Producto Ventas Precio Total\n");
printf ("----------------------------------------------\n");
printf ("Cola %7ld %4.2f %9.2f\n",
ventas_cola, precio_cola, total_cola);
printf ("Naranja %7ld %4.2f %9.2f\n",
ventas_naranja, precio_naranja, total_naranja);
printf ("Limon %7ld %4.2f %9.2f\n",
ventas_limon, precio_limon, total_limon);
printf (" TOTAL %9.2f\n",
 total_cola+total_naranja+total_limon);
} 
