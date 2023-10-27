#include<stdio.h>

int main() {

    int a = 10;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    ***d = 20; //here we are changing the value then all values are changed.

    printf("%d\n",a); // 20
    printf("%d\n",*b); // 20
    printf("%d\n",**c); // 20
    printf("%d",***d); // 20
}