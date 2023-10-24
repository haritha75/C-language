#include<stdio.h>

void main() {

    int arr[2][2]={
        
        {1,2},
        {3,4}

        };

    int a[2][2]={

        {1,1},
        {1,1}
        
        };

    int sum[2][2];

    int i,j;
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            sum[i][j]=arr[i][j]+a[i][j];
        }
    }

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}