#include<stdio.h>

void main() {

    int arr[5];

    int i,j;
    int sum=11;

    printf("Enter array values:\n");
    int len=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }
    int flag=0;

    for(i=0;i<len-1;i++) {
        for(j=i+1;j<len;j++) {
            if((arr[i]+arr[j])==sum) {
              printf("%d %d\n",i,j);
              flag=1;
            }
        }
    }
    if(flag==0)
      printf("not exit");
}