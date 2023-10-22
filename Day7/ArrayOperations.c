#include<stdio.h>
#include<limits.h>

void main() {

    int arr[5];

    arr[0]=11;
    arr[1]=45;
    arr[2]=97;
    int length=3;

    //insert at end
    printf("enter the item:\n")
    int item;
    scanf("%d ",&item);
    arr[length]=item;
    length++;

    //insert at parituclar index
    printf("Enter the index and item:\n")
    int index;
    scanf("%d %d",&index,&item);
    int i;
    for(i=length;i>index;i--) {

        arr[i]=arr[i-1];

    }
    arr[i]=item;
    length++;


    //deletion at end

    arr[length-1]=0;
    length--;

    //deletion at begining

    for(i=0;i<length;i++) {
        arr[i]=arr[i+1];
    }
    length--;

    //deletion at midddle
    int index=2;
    for(i=2;i<length;i++) {
        arr[i]=arr[i+1];
    }
    length--;

    //traversal

    for(i=0;i<length;i++) {
        printf("%d ",arr[i]);
    }

}