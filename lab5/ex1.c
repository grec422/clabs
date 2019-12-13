#include <stdio.h>
int main()
{  int len,i;
char str[100];

gets(str);
len=strlen(str);

printf("output:\n");

for(i=len-1;i>=0;i--)
printf("%c",str[i]);
printf("\n");
return 0;
}




