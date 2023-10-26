#include<stdio.h>
#include<string.h>

void main() {

    char arr[]= "hello";

    char a[6];

    strcpy(a,arr); //here we ar copying the string into another array.
    printf("%s",a);
}