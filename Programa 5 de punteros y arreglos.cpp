#include<ctype.h>
int getch(void);
void ungetch(int);{
int c,sign;
while(ispace(c=getch()))
if(!sdigit(c)&& c!=EOF && c !='+'&& c!='-'){
	ungetch(c);
	return 0;
}
sign=(c=='-')?-1:1;
if(c=='+'||c=='-')
c=getch();
for(*pn=0;isdigit(c)=getch())
*pn=10* *pn+(c-'0');
*pn*=sign;
if(c!=EOF)
ungetch(c);
return c;
}
