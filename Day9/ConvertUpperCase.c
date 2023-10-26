#include<stdio.h>

void main() {

    char arr[]="haritha";

    for(int i=0;arr[i]!='\0';i++) {
        printf("%c",arr[i]-32);
    }
}