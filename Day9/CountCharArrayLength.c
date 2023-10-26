#include<stdio.h>
#include<string.h>

void main() {

    int len=0;

    char arr[]="hello";

    for(int i=0;arr[i]!='\0';i++) {
        len++;

    }
    printf("%d",len);
}