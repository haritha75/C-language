#include<stdio.h>
#include<math.h>
void main() {
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            printf("Not Prime");
            return; 
        }
    }
        printf("Prime");
}