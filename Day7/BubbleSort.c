#include<stdio.h>

void main() {

    int arr[5];
    int i,j;
    int len=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len-1;i++) {

        for(j=0;j<len-i-1;j++) {

            if(arr[j]>arr[j+1]) {
                
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

     for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }


}