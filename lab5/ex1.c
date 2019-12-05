#include <stdio.h>
#include <string.h>

void reverse(char s[], int a,int b)
{
    int m;int n;
    n=b-(a+1);
    if(a<n)
    {
        m=s[a];
        s[a]=s[n];
        s[n]=m;
        reverse(s,++a,b);
    }
}

int main()
{
    char s;
    char p[100];
    int a=0;
    int q=0;
    while((s=getchar())!='\n')
    {
        p[a]=s;
        q=++a;
    }
    reverse(p,0,q);
    for(a=0;a<q;a++)
    printf("%c",p[a]);
}







