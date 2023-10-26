#include<stdio.h>

void main() {

    char arr[]="hello23674753haritha";

    for(int i=0;arr[i]!='\0';i++) {

        if(arr[i]>57)
           printf("%c",arr[i]);
    }
}