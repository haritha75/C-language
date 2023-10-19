#include<stdio.h>
#include<math.h>

void main() {

    int a=4,b=10;

    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}