#include<stdio.h>
#include<string.h>

void main() {

    int i,n;
    scanf("%d",&n);
    char arr[n];


    for(i=0;i<n;i++) {
       scanf("%c",&arr[i]);
    }

    printf("%s",arr); //if you give spaces in the input it will count spaces also one character.
 }