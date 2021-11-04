#include <stdio.h>
main()
{
float a, b, c, d, x, y;
printf("Evaluacion del polinomio y=ax^3 + bx^2 + cx + d.\n");
printf("Valor de los coeficientes a, b, c y d:");
scanf ("%f%f%f%f", &a, &b, &c, &d);
printf ("Introducir el valor de la variable x:");
scanf ("%f", &x);
y = a*x*x*x + b*x*x + c*x + d;
printf ("El resultado del polinomio %.2f x^3 + %.2f x^2", a,
b);
printf (" + %.2f x + %.2f para x=%.2f es: %.2f\n", c, d, x,y);
} 
