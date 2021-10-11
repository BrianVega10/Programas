 #include < stdio.h>
#include < string.h>
#define MAXLINE 1000
int getline(char *line, int max);
/* find: imprime líneas que coinciden con el patrón del 1er. argumento */
main(int argc, char *argv[ ])
í
char line [MAXLINE];
long lineno = 0;
int c, except = 0, number = 0, found = 0;
while (— argc > 0 && (*4- +argv)[0] = ='-')
while (c = *+ + argv[0])
switch (c) {
case 'x':
except = 1;
break;
case 'n':
number = 1;
break;
default:
printf ("find: opción ilegal % c\n", c);
argc = 0;
found = —1;
break;
}
if (argc ! = 1)
printf ("Uso: find - x —n patrón\n");
else
while (getline(line, MAXLINE) > 0) {
lineno + + ;
if ((strstr(line, *argv) != NULL) != except) {
if (number)
printf(“%ld:", lineno);
printf("%s", Une);
found + + ;
}
}
retum found;
