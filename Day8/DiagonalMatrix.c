#include<stdio.h>

void main() {

    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };


    int i,j;
    int res[3][3];

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {

          if(i==j)
            res[i][j]=arr[i][j];
          else 
            res[i][j]=0;  
        }
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
          printf("%d ",res[i][j]);
        }
        printf("\n");
    }

}