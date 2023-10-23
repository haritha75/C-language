#include<stdio.h>

void main() {

    int arr[5];
    int i,j;
    int len=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<len;i++) {

        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }
}