#include<stdio.h>
int num(int m)
{
    int count=0;
    while(m)
    {
        ++count;
        m=(m-1)&m;
    }
    return count;
}
int main(int argc,char *argv[])
{
    char a;
    int b=0;
    while((a=getchar())!='\n')
    {
        b=b*10+a-'0';
    }
    printf("%d\n",num(b));
    return 0;
}

