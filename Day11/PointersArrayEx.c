#include<stdio.h>

void main() {

    int x[3] = {1,2,3};
    int y[3] = {4,5,6};
    int z[3] = {7,8,9};

    int *pointers[3];

    pointers[0]= x;
    pointers[1]= y;
    pointers[2]= z;


    printf("%p\n",pointers); //it print address of pointers of first index address.
    printf("%p\n",&x);
    printf("%p\n",*pointers); //it print in base index of pointer whateve in that that will will be printed.
    printf("%d\n",**pointers); //print 1

   printf("%d\n",pointers[0][1]);
}