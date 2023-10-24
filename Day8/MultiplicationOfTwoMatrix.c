#include<stdio.h>
void main() {


    int arr[2][2]={
        {1,2},
        {3,4}
    };
    int b[2][2]={
        {1,1},
        {1,1}
    };
    int i,j,h;
    int res[2][2];

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            for(h=0;h<2;h++) {
            res[i][j] +=arr[i][h]*b[h][j];
            }
        }
    }

      for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {

            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}