#include<stdio.h>

void main() {

    int arr[]={1,3,4};

    int *p=arr;

    printf("%d\n",p[1]);

    for(int i=0;i<3;i++) {

        printf("%d ",p[i]); //it working like arr
    }

    printf("\n");

    for(int i=0;i<3;i++) {

        printf("%d ",*(p+i));
    }
}