#include<stdio.h>
#include<string.h>

void main() {

    char arr[]= "hello";

    char a[]=" world";

    strcat(arr,a);
    printf("%s",arr);
}