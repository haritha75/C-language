#include<stdio.h>
#include<limits.h>

void main() {

    int arr[5];

    int i;
    int length= sizeof(arr)/sizeof(arr[0]);


    for(i=0;i<length;i++) { 

        scanf("%d",&arr[i]); 

    }
    int max= INT_MIN;


    for(i=0;i<length;i++) {

        if(arr[i]>max)
             max=arr[i];


    }
    printf("%d ",max);

    int min=INT_MAX;

    for(i=0;i<length;i++) {

        if(arr[i]<min)
          min=arr[i];
    }

    printf("%d ",min);
}