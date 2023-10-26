#include<stdio.h>
#include<string.h>

void main() {


    char arr[]="12345";

    int len=strlen(arr);
    int res=0;
    int power=1;

    for(int i=len-1;i>=0;i--) {

        int curr= arr[i]-'0';
        res +=curr *power;
        power *=10;

    }

    printf("%d",res);
}