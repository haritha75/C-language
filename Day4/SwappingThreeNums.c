#include<stdio.h>
#include<math.h>

void main() {

    int a=4,b=10,c=6;

    a=a+b+c;
    c=a-b-c;
    b=a-b-c;
    a=a-b-c;
    printf("%d %d %d",a,b,c);
}