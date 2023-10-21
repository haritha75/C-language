#include<stdio.h>

int main() {
    printf("Enter n1 and n2 :\n");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    int max = n1>n2?n1:n2;

    for(int i=max;i>=1;i--) {
        if(n1%i==0 && n2%i==0) {
          printf("%d",i);
          break;
        }

    }
    return 0;

}