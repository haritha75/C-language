#include<stdio.h>

int main() {

    printf("Enter n:\n");
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        if(n%i==0) 
          printf("%d\n",i);
    
    }
    return 0;
}