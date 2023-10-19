#include<stdio.h>
#include<limits.h>

void main() {

    int a=11,b=42;

    a<b?printf("b is big\n"):printf("a is big\n");

    int d= a>b?a:b;
    printf("%d",d);
}