#include <stdio.h>
/* eco de los argumentos de la línea de órdenes; la. versión */
main(int argc, char *argv[ ])
{
int i;
for (i = 1; i < argc; i + + )
printf("%s% s", argv[i], (i < argv—1) ? "":"");
  printf ("\n");
retum 0;
}
