#include<stdio.h>

void main() {

    int arr[]={2,4,6};

    int *a=arr;

    printf("%p\n",a); //address of base index
    printf("%p\n",&a); //address of a
    printf("%p\n",arr); //address of base index
    printf("%d\n",*a); //value of base index

    for(int i=0;i<3;i++) {

        printf("%d\n",*(a+i));
    }

}