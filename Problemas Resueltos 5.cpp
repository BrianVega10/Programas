#include <stdio.h>
main()
{
char minuscula, mayuscula; 
printf ("Introduce un caracter en minuscula: ");
scanf ("%c", &minuscula);
mayuscula = minuscula - 32;
printf ("El caracter %c en mayuscula es %c\n", minuscula,
mayuscula);
} 
