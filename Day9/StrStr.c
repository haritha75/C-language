#include<stdio.h>
#include<string.h>

void main() {

    char arr[]="hello world rock";
    char a[]="world";

    char *diff= strstr(arr,a); // it return substring  to till end.

    printf("%s",diff);
}