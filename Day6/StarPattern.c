#include<stdio.h>
int main() {
    int n=7,start=2;
    int i;
    int num;
    for(i=1;i<=n;i++){
        num = num*10+start;
        printf("%d ",num);
    }
}