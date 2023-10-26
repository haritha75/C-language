#include<stdio.h>
#include<string.h>

void main() {

    char arr[]= "abcd";

    char a[]=" abcd";

    int diff=strcmp(arr,a); //it compares each character if both same return 0 other wise -1 -r 1;
    printf("%d",diff);

    int dif=strncmp(a,arr,2);
    printf("%d",dif);

}