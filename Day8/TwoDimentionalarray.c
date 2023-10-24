#include<stdio.h>

void main() {

    int arr[2][3]={{2,4,6},{8,3,5}}; //if you not mention size here then it will shows error
    int i,j;
     for(i=0;i<2;i++) {

        for(j=0;j<3;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
}