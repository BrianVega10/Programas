 #include <stdio.h>
#include < string.h>
#define MAXLINES 5000 /* máx # de líneas a ordenar */
char *lineptr[MAXLINES]; 
int rea dlines( char * lineptr [ ], int nlines);
void writelines(char *lineptr[ ], int nlines);
void qsort(void *lineptr[ ], int left, int right,
int (*comp) (void *, void *));
int numcmp(char *, char *);
/* ordena líneas de entrada */
main(int argc, char *argv[ ])
f
int nlines; 
int numeric = 0; 
if (argc > 1 && strcm p("argv[l], n") = = 0)
numeric = 1;
if ((nlines = readlines(lineptr, MAXLINES)) > = 0) {
qsort((void **) lineptr, 0, nlines—1,
(int (*) (void*, void*)) (numeric ? numemp : strcmp));
writelines(lineptr, nlines);
retum 0;
} else {
  printf ("entrada demasiado grande para ser ordenada\n");
return 1;
}
}
