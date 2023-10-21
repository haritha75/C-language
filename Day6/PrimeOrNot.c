#include<stdio.h>

void main() {
   printf("enter n number:\n");
    int n;
    scanf("%d",&n);

    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
          printf("Not Prime");
          return;
        }
    }
    printf("Prime");
}