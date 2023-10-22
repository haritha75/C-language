#include<stdio.h>

void main() {

    int arr[5];
    arr[0]=11;
    arr[1]=12;
    arr[2]=54;

    printf("%d\n",arr[4]); //it also give some garbage value because we are not assign value to the that index.
    printf("%d\n",arr[7]);
}