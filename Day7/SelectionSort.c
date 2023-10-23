#include<stdio.h>

void main() {

    int arr[5];
    int i,j;
    int len=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len;i++) {
        for(j=i+1;j<len;j++) {

            if(arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

     for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }


}
