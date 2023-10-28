#include<stdio.h>

void main() {

    int a=5,b=12;
    swap(&a,&b);
    printf("%d %d",a,b);

}

void swap(int *a,int *b) {

    int temp=*a;
    *a=*b;
    *b=temp;


}