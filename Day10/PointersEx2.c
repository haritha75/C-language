#include<stdio.h>

void main() {

    int a=5;
    int *b= &a;
    printf("%p\n",b); //here address of a 
   
    printf("%p",b+1);//adress of a and +1
}