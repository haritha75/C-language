#include<stdio.h>
#include<string.h>
void main() {

    char arr[]="rock";

    for(int i=0;i<strlen(arr);i++) {

        for(int j=i+1;j<strlen(arr);j++) {

            if(arr[i]>arr[j]) {
              char temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }

        }
    }
    printf("%s",arr);

}