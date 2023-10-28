#include<stdio.h>

void main() {

    int arr[3][3] = {

        {1,2,3},
        {4,5,6},
        {7,8,11}
    };

    printf("%p\n",arr); //first index address
    printf("%p\n",arr[0]); //here also first index address
    printf("%d\n",*arr[0]);
    printf("%d\n",*arr[1]);
    printf("%p\n",arr[2]+2); //it print address of 11 value index
    printf("%d\n",*(arr[2]+2)); //11


    for(int i=0;i<3;i++) {

        for(int j=0;j<3;j++) {

            printf("%d ",*(arr[i]+j));

        }
        printf("\n");
    }
}