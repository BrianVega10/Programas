#include <stdio.h>
#include <string.h>
#define MAXLINES 5000 /* máx # de líneas por ordenar */
char *lineptr[MAXLINES];
int readlines(char *lineptr[ ], int nlines);
void writelines(char *lineptr[ ], int nlines);
void qsort(char *lineptr[ ], int left, int right);

main( ){
	int nlines; 
if ((nlines = readlines(lineptr, MAXLINES)) > = 0) {
qsort(lineptr, 0 , nlines—1 );
writelines(lineptr, nlines);
return 0 ;
f else {
printf("error: entrada demasiado grande para ordenarla\n''); I
retum 1 ;
}
}
#deíine MAXLEN 1000 /* máx longitud de cualquier línea de entrada*/
int getline(char *, int);
char *alloc(int);
int readlines(char *lineptr[ ], int maxlines)
{
int len, nlines;
char *p, line[MAXLEN];
nlines = 0 ;
while ((len = getline(line, MAXLEN)) > 0)
if (nlines > = maxlines ]¡ (p = alloc(len)) = = NULL)
retum —1 ;
else {
line[len—1 ] = '\0 '; 
strcpy(p, line);
lineptr [nlines-I- + ] = p;
}
retum nlines;
}

void writelines(char *lineptr[ ], int nlines)
{
int i;
for (i = 0 ; i < nlines; i+ +)
printf(''%s\n", lineptr [i]);
}
