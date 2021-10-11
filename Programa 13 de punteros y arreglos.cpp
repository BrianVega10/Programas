#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXTOKEN 100
enum { ÑAME, PARENS, BRACKETS };
void dcl(void);
void dirdrUvoid);
int gettoken(void);
int tokentype; 
char token [MAXTOKEN]; 
char ñame [MAXTOKEN]; 
char datatype[MAXTOKEN]; 
char out[1000]; 
main( ) 
{
while (gettoken( ) ! = EOF) { 
strcpy (datatype, token); 
out[0] = '\0'¡
dcl( ); 
if (tokentype ! = '\n')
printf ("error de sintaxis\n");
printf("%s: %s %s\n", ñame, out, datatype);
}
return 0;
}
