#include<stdio.h>
#include<string.h>
 void main() {

    char arr[]={"hello"}; //we can declare like this also it takes each character in a string. and atht the end it stores null value like this '\0' it willl manage compiler.

    for(int i=0;arr[i]!='\0';i++) {

        printf("%c\n",arr[i]);
    }

    char a[]={'h','e','l','l','o'}; // like this also declare 

    int len=strlen(a);

     for(int i=0;i<len;i++) {

        printf("%c",a[i]);
    }
    printf("\n");

    // like this also print

    printf("%s",arr); //s means string it will print all character at a time like a string

 }