#include<stdio.h>
int main() {
    int arr[4];
    int i;
    int length= sizeof(arr)/sizeof(arr[0]);

    printf("Enter the  array elements:\n ");

    for(i=0;i<length;i++) {
        scanf("%d",&arr[i]);
    }
    
    int last = arr[length-1];
    printf("%d ",last);
    for(i=length-2;i>=0;i--){

        if(arr[i]>last) {
            
            last=arr[i];
            printf("%d ",last);
        }
    }
}