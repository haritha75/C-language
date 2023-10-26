#include<stdio.h>
#include<string.h>

void main() {

    char arr[]="helilo";
    char a[]="hari";

    int len=strlen(arr);
    int le=strlen(a);
    for(int i=0;i<len;i++) {
        for(int j=0;j<le;j++) {
            if(arr[i]==a[j])
              printf("%c",arr[i]);
        }
    }
}