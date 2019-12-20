#include<stdio.h>
#include<math.h>
char a[100];
double f(){
    gets(a);
    switch(a[0]){
        case '+':return f()+f();
        case '-':return f()-f();
        case '*':return f()*f();
        case '/':return f()/f();
        default:return atof(a);
    }
}
int main(int argc, char *argv[]) {
    double ans=0.0;
    ans=f();
    printf("%f\n",ans);
    return 0;
}
