#include<stdio.h>
int strindex(char  p[],char  q[])
{
    int  a,b,c=-1,k=0;
    for(a=0;p[a]!='\0';a++)
    for(b=0;q[b]!='\0';b++)
{
    if(p[a]!=q[b]) break;
a++;
k++;
}
if(q[b]=='\0') k=a-k;
return c;
}
int main()
{
    char s[200],t[200];
    gets(s);
    get(t);
    printf("%d\n",strindex(s,t));
}