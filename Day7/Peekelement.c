#include<stdio.h>

void main() {

    int arr[5];
    int i,j;
    int len=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1])
      printf("%d ",arr[0]);

    for(i=1;i<len-1;i++) {

        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            printf("%d ",arr[i]);
        }
    }  

    if(arr[len-1]>arr[len-2])
      printf("%d ",arr[len-1]);
}