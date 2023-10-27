#include<stdio.h>

void main() {

    int a=12;
    int *b= &a;
    printf("%p\n",&a); //here address of a 
    printf("%d\n",a); // a value will be printed
    printf("%d\n",*b); // here a value be printed
    printf("%p\n",&b); //address of b 
    printf("%p",b);//adress of a
}