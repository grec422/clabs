#include<stdio.h>
#include<stdlib.h>
int str(char *a)   
{
    if(*a=='\0')
        return 0;
    else
        return str(++a)+1;
}
int reverse_string(char * string)
{
    int i=str(string);  
    if(i<=1)      
        ;
    else
    {
    int m= string[0];    
    string[0]=string[i-1]; 
    string[i-1]='\0';      
    reverse_string( string+1);
    string[i-1]=m;       
    }
}
int main()
{ 
	char a[100];
     gets(a);
    reverse_string(a);
    printf("%s\n",a);
    system("pause");
    return 0;
}



