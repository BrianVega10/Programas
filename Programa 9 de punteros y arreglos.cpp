#include <stdio.h>
#include < string.h>
#define MAXLINE 1000
int getline(char *line, int xnax);
/* find: imprime lineas que coinciden con el patrón del 1er. argumento */
main(int argc, char *argv[ ])
{
char line [MAXLINE];
int found = 0;
if (argc ! = 2)
printf ("Uso: find patrón\n");
else
while (getline(line, MAXLINE) > 0)
if (strstr(line, argv[l] != NULL) {
printf("%s", line);
found + + ;
}
retum found;
}
