#include<stdio.h>

void main() {

    char arr[]="Hello Rock where ARE You";

    for(int i=0;arr[i]!='\0';i++) {

        if(arr[i]>=97 && arr[i]<=122)
           printf("%c",arr[i]-32);
        else if(arr[i]>=65 && arr[i]<97)
           printf("%c",arr[i]+32) ;  

        else 
         printf("%c",arr[i]);
    }
}