#include<stdio.h>

void main() {

    int arr[5];
    int a[5];

    int i;
    int length= sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<length;i++) { //here sizeof array gives bites means 5*4=20/arr[0] =20/4=5.

        scanf("%d",&arr[i]); //here we are reading values.

    }

    for(i=0;i<length;i++) {

        a[i]=arr[i];

    }
    for(i=0;i<length;i++) {
        printf("%d ",a[i]);
    }
    
}