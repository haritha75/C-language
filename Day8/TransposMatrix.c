#include<stdio.h>

void main() {

    int arr[3][3]={

        {1,2,3},
        {4,5,6},
        {7,8,9}
    };


    int i,j;

    for(i=0;i<3;i++) {

        for(j=i;j<3;j++) {

            int temp=arr[i][j];

            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
    }


    for(i=0;i<3;i++) {

        for(j=0;j<3;j++) {

            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}