#include<stdio.h>

void main() {

    int rows,cols;

    printf("Enter the number of rows:\n");
    scanf("%d",&rows);

    printf("Enter the number of rcols:\n");
    scanf("%d",&cols);

    int arr[rows][cols];
    int i,j;
    printf("enter the array values:\n");

    for(i=0;i<rows;i++) {

        for(j=0;j<cols;j++) {

            scanf("%d",&arr[i][j]);
        }

    }
      for(i=0;i<2;i++) {

        for(j=0;j<3;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
    
}