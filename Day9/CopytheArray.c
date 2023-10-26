#include<stdio.h>
#include<string.h>

void main() {

    char arr[]="hello";
    int len=strlen(arr);
    char a[len];

    for(int i=0;i<len;i++) {

        a[i]=arr[i]; //in c we cannot directly copy the array like this only do.

    }

    printf("%s",a);
}