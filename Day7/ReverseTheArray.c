#include<stdio.h>

void main() {

    int arr[5];
    int a[5];

    int i;
    int length= sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<length;i++) { 

        scanf("%d",&arr[i]); 

    }

    for(i=0;i<length;i++) {

        a[i]=arr[i];

    }
    for(i=length-1;i>=0;i--) {
        
        printf("%d ",a[i]);
    }
    //another method

    for(i=0;i<length;i++) {

        printf("%d ",a[length-1-i]);
    }
    
}