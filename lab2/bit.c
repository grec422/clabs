#include <stdio.h>
int main ()
{
    unsigned int i=1;
    unsigned int p=0;
    unsigned int q=0-1;
    while(i!=0)
    {
        i=i<<1;
        p=p+1;
    }
    printf("%d\n",p);
    printf("%u\n",q);
    return 0;
}
