#include<stdio.h>

void main() {

    int arr[]={3,5,7,82,5,12,11,16}; //here we are choice declare size or not.if not declare then we can add more items also

    printf("%d\n",arr[3]);

    int a[5]={1,4,6,11,54,32,58,12}; //if you mention size but we can add more than size wheever print that value it gives some garbage value.

    printf("%d\n",a[6]);
}