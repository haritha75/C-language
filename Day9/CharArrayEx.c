#include<stdio.h>

void main() {

    char arr[2][6]= {{'h','e','l','l','o'},{'w','o','r','l','d'}}; //it means first hello  is one row and world is another row and in this row only 6 characters are store

    printf("%s",arr[0]);
    printf("\n");

    char arr1[2][6]={{"hello"},{"world"}}; //this is also another way
        printf("%c\n",arr1[0][1]); // it means in first row 1 character means e.

    char a[2][3]={"hel","roc"};

    printf("%s",a[0]);    



}