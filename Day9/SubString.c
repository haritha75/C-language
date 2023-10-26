#include<stdio.h>
#include<string.h>

void main() {

    char arr[]="hellorockworld";
    char a[]="rock";

    int len=strlen(arr);
    int subLen=strlen(a);
    int flag;

    for(int i=0;i<len-subLen;i++) {
        int k=0;
        flag=0;
        for(int j=i;j<i+subLen;j++) {

            if(a[k++]==arr[j]) {

                if(k+1==subLen) {
                    if(flag==0)
                      printf("sub string found");
                      return;
                }
                
            }
            else {
                flag=1;
                break;
            }
        }
    }
        if(flag==0)
          printf("sub string found");
        else 
          printf("not found");  
    
}