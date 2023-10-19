#include<stdio.h>
#include<limits.h>

void main() {

    int a=54,b=11;

    printf("%d\n",a/b);
    printf("%f\n",a*1.0/b);
    printf("%f\n",(float)a/b);
    printf("%f\n",(float)(a/b));
    printf("%f\n",a/b); //it shows error because we are  doing int operation but without converting printing in float.
    printf("%f",5/2);
    printf("%d",5/2);

}