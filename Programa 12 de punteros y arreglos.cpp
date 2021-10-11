#include <math.h>
/* numemp: compara si y s2 numéricamente */
int numcmp(char *sl, char *s2)
{
double vi, v2;
v i = atof(sl);
v2 = atof(s2);
if (vi < v2)
return - 1;
else if (vi > v2)
retum 1;
else
retum 0;
}
