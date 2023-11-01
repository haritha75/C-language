#include<stdio.h>

void main() {

    int rows,col;
    scanf("%d %d",&rows,&col);
    int arr[rows][col];

    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++)
            scanf("%d",&arr[i][j]);
    }

    int *p=arr; //here we are storing the array address

    printf("%p\n",p);
    printf("%p\n",arr);
     printf("%p\n",*arr); //this all print base index address.
    printf("%p\n",&arr);
    printf("%p\n",arr[0]);
    printf("%p\n",&arr[0][0]); //same return base index address
    printf("%p\n",&arr[0][1]); // it means in 0 th index 1 value address will be printed
    printf("%p\n",p+1);//it stores 1st index address
    printf("%p\n",arr+1); //here first base index address and +1 means 2nd row base inde address
    printf("%p\n",&arr[1][0]); //here also same 2nd row base index
    printf("%d\n",**(arr+1)); // it means first base address +1 means it forward next index that means 1 row and in first base value printed.
    printf("%d\n",*(p+1));

    
}