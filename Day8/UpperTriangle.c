#include<stdio.h>

void main() {

    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int i,j,k=0;
    int res[3][3];


    for(i=0;i<3;i++) {

         while(k<i) {
            res[i][j++]=0;
            k++;
        }
        for(j=i;j<3;j++) {
            res[i][j]=arr[i][j];

        }

       
    }

     for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {

            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}