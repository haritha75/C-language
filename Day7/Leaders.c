#include<stdio.h>

void main() {

    int arr[5];

    int len=sizeof(arr)/sizeof(arr[0]);

    printf("enter array values:\n");

    int i,j,flag=1;
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len-1;i++) {
        for(j=i+1;j<len;j++) {
            if(arr[i]<=arr[j]) {
              flag=0;
              break;
            }
        }
        if(flag==1)
          printf("%d ",arr[i]);
        else 
          flag=1;  
    }

    printf("%d\n",arr[len-1]);
}