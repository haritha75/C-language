#include<stdio.h>

void main() {

    char arr[]="hello23674753HARITHA";

    for(int i=0;arr[i]!='\0';i++) {

        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
           printf("%c",arr[i]);
    }
}