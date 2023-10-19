#include<stdio.h>
#include<limits.h>

void main() {

    int b=1;

    int c= ++b + ++b + ++b;
    printf("%d %d",b,c);
}