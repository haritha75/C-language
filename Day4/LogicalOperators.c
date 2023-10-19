#include<stdio.h>
#include<limits.h>

void main() {

    int c=21,d=54;

    int s=(c>d || d!=c) && !(d>c);
    printf("%d",s);
}