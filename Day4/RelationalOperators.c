#include<stdio.h>
#include<limits.h>

void main() {

    int a,c;
    a=5,c=22;
    int b= (a>=c) || (a<c) && (a==c); 
    int c1= (a!=c) && (c>a);
   
    printf("%d\n", b);
    printf("%d",c1);
   
}